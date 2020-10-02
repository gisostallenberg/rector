<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class SkipMoreThanTwoConditionClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels && $car->hasFuel && $car->hasEngine) {
            return 'yes';
        }

        return 'no';
    }
}

?>
