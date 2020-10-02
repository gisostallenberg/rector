<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class SkipNonFirstLevelIf
{
    public function canDrive(array $cars)
    {
        foreach ($cars as $car) {
            if ($car->hasWheels && $car->hasFuel) {
                return true;
            }
        }

        return false;
    }
}

?>
