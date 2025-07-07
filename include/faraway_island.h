#ifndef GUARD_FARAWAY_ISLAND_H
#define GUARD_FARAWAY_ISLAND_H

u32 GetFalcomonMoveDirection(void);
bool8 ShouldFalcomonShakeGrass(struct ObjectEvent *objectEvent);
void UpdateFarawayIslandStepCounter(void);
bool8 ObjectEventIsFarawayIslandFalcomon(struct ObjectEvent *objectEvent);
bool8 IsFalcomonPlayingHideAndSeek(void);

#endif // GUARD_FARAWAY_ISLAND_H
