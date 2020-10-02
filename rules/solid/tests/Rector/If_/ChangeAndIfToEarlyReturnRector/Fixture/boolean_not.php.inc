<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class BooleanNotClass
{
    public function canDrive(Car $car)
    {
        if (!$car->hasWheels && !$car->hasFuel) {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class BooleanNotClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels) {
            return false;
        }
        if ($car->hasFuel) {
            return false;
        }
        return true;
    }
}

?>
