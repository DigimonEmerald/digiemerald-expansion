#ifndef GUARD_FARAWAY_ISLAND_H
#define GUARD_FARAWAY_ISLAND_H

u32 GetFalcomonMoveDirection(void);
bool8 ShouldFalcomonShakeGrass(struct ObjectEvent *);
void UpdateFarawayIslandStepCounter(void);
bool8 ObjectEventIsFarawayIslandFalcomon(struct ObjectEvent *);
bool8 IsFalcomonPlayingHideAndSeek(void);

#endif // GUARD_FARAWAY_ISLAND_H
