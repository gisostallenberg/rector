<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class SkipConditionWithOr
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels || $car->hasFuel) {
            return true;
        }

        return false;
    }
}

?>
