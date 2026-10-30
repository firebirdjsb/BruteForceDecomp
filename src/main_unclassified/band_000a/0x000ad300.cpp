/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F0C39A11A718751F1BA9E9CBB21A16D453F6B9D181DCB93B5EA85BAE2EC863D
 * Entry: 0x000ad300, Ghidra index: 2070, label: FUN_000ad300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_000ad3a0(int param_1,int param_2,char param_3);

extern uint32_t DAT_00469ab0;
void FUN_000ad300(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 100);
  do {
    iVar1 = FUN_000b9120(DAT_00469ab0);
    if (iVar1 != 0) {
      if (param_1 + 0x2c != 0) {
        FUN_000b25a0(param_1 + 0x2c,iVar1);
      }
      *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) & 0xfb;
    }
    *piVar2 = iVar1;
    *(short *)(iVar1 + 0x70) = (short)iVar3;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 3);
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(short *)(iVar3 + 0x20) < 600) {
    FUN_000ad3a0(param_1,(*(short *)(iVar3 + 0x22) < 400) + '\x02',1);
    return;
  }
  FUN_000ad3a0(param_1,*(short *)(iVar3 + 0x22) < 400,1);
  return;
}
