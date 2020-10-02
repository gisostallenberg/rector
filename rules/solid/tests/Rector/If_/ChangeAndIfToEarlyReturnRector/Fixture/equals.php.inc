<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class EqualsClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels === true && $car->hasFuel === true) {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class EqualsClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels !== true) {
            return false;
        }
        if ($car->hasFuel !== true) {
            return false;
        }
        return true;
    }
}

?>
