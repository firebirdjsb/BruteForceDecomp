/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8121C9FDA6B1F0BD8883BC65084C04B68104D8F04FF646E2FDB6E7487F573073
 * Entry: 0x00319e80, Ghidra index: 12253, label: FUN_00319e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x319ea9/0x319ec1 load [0x0032f690] as f32. */
extern float _DAT_0032f690;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319e80(float param_1,float param_2)

{
  undefined8 uVar1;
  
  FUN_00319d10(0,param_1,param_2,0x473b8000,&param_2,&param_1);
  uVar1 = FUN_00319a67(_DAT_0032f690 * param_2);
  *(int *)((int)((ulonglong)uVar1 >> 0x20) + 0x1b0) = (int)uVar1;
  uVar1 = FUN_00319a67(_DAT_0032f690 * param_1);
  *(int *)((int)((ulonglong)uVar1 >> 0x20) + 0x1b4) = (int)uVar1;
  return;
}
