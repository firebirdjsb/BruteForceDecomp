/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C6A72B0E8AD726D57BA73FC0D22F0CB6077D065586A49A022870944907ADB5A
 * Entry: 0x0033fc56, Ghidra index: 12657, label: FUN_0033fc56
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0033fc56(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0033f570(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4),param_4,
                       *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),param_6,
                       param_5);
  if (iVar1 < 0) {
    uVar2 = 0xc000006d;
  }
  return uVar2;
}
