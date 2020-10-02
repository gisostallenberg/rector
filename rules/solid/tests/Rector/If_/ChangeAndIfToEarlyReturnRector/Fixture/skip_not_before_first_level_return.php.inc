<?php

namespace Rector\SOLID\Tests\Rector\If_\ChangeAndIfToEarlyReturnRector\Fixture;

class SkipNotBeforeFirstLevelReturnClass
{
    public function canDrive(Car $car)
    {
        if ($car->hasWheels && $car->hasFuel) {
            return 'yes';
        }

        if (!$car->hasLights || !$car->hasEngine) {
            return 'maybe';
        }

        return 'no';
    }
}

?>
