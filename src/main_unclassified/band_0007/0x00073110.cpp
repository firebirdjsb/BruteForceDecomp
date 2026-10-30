/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B6C54FFAB14910A3A3A15920A6BA3F647C63BD79BB592E209D02C6785C62771
 * Entry: 0x00073110, Ghidra index: 1294, label: FUN_00073110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_0006e3b0(void);
extern undefined4 FUN_0006e4a0(float param_1);

extern uint32_t DAT_003f7f28;
void FUN_00073110(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  
  if (param_2 != 0) {
    bVar1 = false;
    switch(param_3) {
    case 1:
      bVar1 = true;
      break;
    case 2:
      bVar1 = true;
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      bVar1 = false;
      break;
    case 6:
    }
    FUN_0006e3b0();
    if (bVar1) {
      FUN_0006e4a0(DAT_003f7f28);
    }
  }
  return;
}
