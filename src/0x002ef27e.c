/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75C337EA7146322B037AE0B187C65D5CB1FC2077A0D900EDD4B8420CB10416CA
 * Entry: 0x002ef27e, Ghidra index: 10707, label: __stbuf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b69a8;
extern uint32_t DAT_0040f530;
extern uint32_t _DAT_0040f4d0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2003 Release */

undefined4 __stbuf(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = __isatty(param_1[4]);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (int *)&DAT_003b69a8) {
    iVar2 = 0;
  }
  else {
    if (param_1 != (int *)0x3b69c8) {
      return 0;
    }
    iVar2 = 1;
  }
  _DAT_0040f4d0 = _DAT_0040f4d0 + 1;
  if ((*(ushort *)(param_1 + 3) & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_0040f530 + iVar2;
  if (*piVar1 == 0) {
    iVar2 = thunk_FUN_00237ea0(0x1000);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      param_1[2] = (int)(param_1 + 5);
      *param_1 = (int)(param_1 + 5);
      param_1[6] = 2;
      param_1[1] = 2;
      goto LAB_002ef2f5;
    }
  }
  iVar2 = *piVar1;
  param_1[2] = iVar2;
  *param_1 = iVar2;
  param_1[6] = 0x1000;
  param_1[1] = 0x1000;
LAB_002ef2f5:
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x1102;
  return 1;
}
