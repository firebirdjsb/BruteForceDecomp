/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14CCDFBBFAA32E9DFC647089B7DB38063210DD736CCF540120B2B34600F2EF97
 * Entry: 0x00238080, Ghidra index: 7864, label: FUN_00238080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046cf80;
extern uint32_t *_DAT_00000000;
/* WARNING: Removing unreachable block (ram,0x002380de) */
/* WARNING: Removing unreachable block (ram,0x00238103) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00238080(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  puVar1 = DAT_0046cf80;
  if (DAT_0046cf80 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*DAT_0046cf80;
  }
  while( true ) {
    if (puVar3 == puVar1) {
      *param_2 = 0;
      return 0x80004001;
    }
    if (((*(int *)(unaff_EDI + 4) == puVar3[2]) &&
        (iVar2 = (**(code **)(*(int *)puVar3[3] + 0xc))((int *)puVar3[3]), -1 < iVar2)) &&
       (iVar2 = (*(code *)*_DAT_00000000)(0,param_1,param_2), -1 < iVar2)) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  return 0;
}
