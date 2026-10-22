/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BC2DCF11C691C2D7A36DDD21E783B7FBB0FD58E03F0233CE3B014BE4931AF25
 * Entry: 0x001025b0, Ghidra index: 3272, label: FUN_001025b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400128;
extern uint32_t DAT_00469b58;
undefined4 FUN_001025b0(int param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_11c;
  uint local_108;
  
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != in_EAX + 1) {
    if (*(int **)(DAT_00469b58 + 8) == (int *)0x0) {
      puVar4 = &DAT_00400128;
      uVar3 = FUN_0001fe90(in_EAX);
      FUN_001e8740(uVar3,puVar4);
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_11c);
      }
    }
    else {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x2c))();
    }
    uVar3 = FUN_00178690(param_1 + 0x60);
    return uVar3;
  }
  return 0;
}
