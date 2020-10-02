<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class OnlyOneIfBeforeClassMethodReturnClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels && $car->hasFuel) {
            return 'yes';
        }

        if ($car->hasLights && $car->hasEngine) {
            return 'maybe';
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class OnlyOneIfBeforeClassMethodReturnClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels && $car->hasFuel) {
            return 'yes';
        }
        if (!$car->hasLights) {
            return 'no';
        }
        if (!$car->hasEngine) {
            return 'no';
        }

        return 'maybe';
    }
}

?>
