/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0FBD923E35DF9B32E08EDF694F248FCE08580A8CCC406F3D709FC7586502122
 * Entry: 0x00074c80, Ghidra index: 1335, label: FUN_00074c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00074d30(void);
extern void FUN_00074c20(void);
extern void FUN_00074b20(void);
extern void FUN_00075380(void);
extern void FUN_00074be0(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_00074c80(int param_1)

{
  int in_EAX;
  int *piVar1;
  int unaff_ESI;
  int local_20;
  int local_1c [6];
  int local_4;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    local_20 = FUN_00075f00((uint *)(in_EAX + 4));
    if ((local_20 == *(int *)(unaff_ESI + 0x28)) ||
       (*(uint *)(in_EAX + 4) < *(uint *)(local_20 + 0xc))) {
      local_1c[0] = *(int *)(unaff_ESI + 0x28);
      piVar1 = local_1c;
    }
    else {
      piVar1 = &local_20;
    }
    if (*piVar1 != *(int *)(unaff_ESI + 0x28)) {
      FUN_00074d30();
      FUN_00074c20();
      if (param_1 != 0) {
        FUN_00074b20();
        piVar1 = (int *)FUN_00075380();
        if (*piVar1 != *(int *)(unaff_ESI + 0x28)) {
          FUN_00074be0();
        }
      }
      if (local_4 != 0) {
        FUN_0008f6e0();
      }
    }
  }
  return;
}
