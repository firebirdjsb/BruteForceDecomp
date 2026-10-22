/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7EFDE9EF893DCF11664699F620465CB0B9455921C6CA0F1D7660CCC65175996
 * Entry: 0x002f4d98, Ghidra index: 10880, label: CreateThread
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a90e0;
dword XAPILIB__CreateThread
                (undefined4 param_1,dword param_2,undefined4 param_3,undefined4 param_4,uint param_5
                ,undefined4 param_6)

{
  dword dVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  dVar1 = param_2;
  if (param_2 == 0) {
    dVar1 = 0x20000;
  }
  iVar2 = PsCreateSystemThreadEx
                    (&param_2,0,dVar1,DAT_004a90e0,param_6,param_3,param_4,param_5 >> 2 & 0xffffff01
                     ,0,0x2f4d00);
  if (((iVar2 < 0) && (*(byte *)(unaff_FS_OFFSET + 0x24) < 2)) &&
     (*(int *)(*(int *)(unaff_FS_OFFSET + 0x28) + 0x28) != 0)) {
    XapiSetLastNTError(iVar2);
    param_2 = 0;
  }
  return param_2;
}
