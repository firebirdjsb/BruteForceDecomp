/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DBC292259DD740CB861ED209AABD68661D03634052AF56CBE35E1904CB54094
 * Entry: 0x00020170, Ghidra index: 174, label: FUN_00020170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00020100(undefined4 param_1,undefined4 param_2,undefined4 param_3);

extern uint32_t PTR_LAB_003a4014;
void FUN_00020170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[0x41] = 0;
  unaff_ESI[0x42] = 0;
  unaff_ESI[0x43] = 0;
  /* XBE 0x0002019e: MOV m32,0x003a4014 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *unaff_ESI = UINT32_C(0x003a4014);
  FUN_00020100(param_3,param_4,0x7f7fffff);
  unaff_ESI[0x90] = param_1;
  unaff_ESI[0x43] = param_3;
  unaff_ESI[0x92] = 0;
  unaff_ESI[0x93] = 0;
  unaff_ESI[0x44] = param_4;
  *(undefined1 *)(unaff_ESI + 0x8e) = 1;
  *(byte *)(unaff_ESI + 0x91) = *(byte *)(unaff_ESI + 0x91) & 0xf9 | 1;
  return;
}
