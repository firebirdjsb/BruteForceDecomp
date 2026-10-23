/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC984B825E4CAAE8EC69610E41651E154B06825E63895A45A4E40F5D72EDAEF5
 * Entry: 0x000aa3b0, Ghidra index: 2032, label: FUN_000aa3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d760;
/* WARNING: Removing unreachable block (ram,0x000aa5be) */

void FUN_000aa3b0(undefined4 param_1,wchar_t *param_2,undefined4 param_3,int param_4,int param_5)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *__src;
  int iVar4;
  undefined1 local_1c [4];
  undefined4 local_18;
  uint local_8;
  uint local_4;
  
  iVar4 = 0;
  *param_2 = L'\0';
  iVar1 = FUN_001e97c0();
  if (iVar1 != 0) {
    iVar2 = FUN_002eaa70(iVar1);
    FUN_0014c470(0);
    if (0 < iVar2) {
      do {
        switch(*(undefined2 *)(iVar1 + iVar4 * 2)) {
        case 0x41:
          if (param_5 != 0) goto LAB_000aa489;
          break;
        default:
          *(undefined4 *)(iVar4 * 4) = 0;
          break;
        case 0x43:
          if (param_4 != 0) {
            uVar3 = FUN_001e97c0();
            *(undefined4 *)(iVar4 * 4) = uVar3;
          }
          break;
        case 0x44:
          FUN_000aa340(param_1,*(undefined4 *)(in_EAX + 0x114));
LAB_000aa489:
          uVar3 = FUN_001e97c0();
          *(undefined4 *)(iVar4 * 4) = uVar3;
          break;
        case 0x4e:
          if (in_EAX != 0) {
            uVar3 = FUN_001e97c0();
            *(undefined4 *)(iVar4 * 4) = uVar3;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    uVar3 = FUN_001e97c0();
    local_4 = 7;
    local_8 = 0;
    /* x86 0x000AA4D3: mov WORD PTR [esp+0x30],di (EDI=0).
     * This clears exactly two low bytes in the same original stack
     * DWORD; the upper 16 bits are not defined by this instruction. */
    local_18 &= UINT32_C(0xffff0000);
    uVar3 = FUN_002eaa70(uVar3);
    FUN_000876a0(local_1c,uVar3);
    param_4 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(param_4 * 4);
        if (iVar1 != 0) {
          FUN_002eaa70(&DAT_0040d760);
          iVar4 = FUN_000aaff0(&DAT_0040d760);
          if (iVar4 != -1) {
            FUN_00087a00();
            uVar3 = FUN_002eaa70(iVar1);
            FUN_000aae70(iVar4,iVar1,uVar3);
          }
        }
        param_4 = param_4 + 1;
      } while (param_4 < iVar2);
    }
    if (local_8 < 0x100) {
      __src = local_18;
      if (local_4 < 8) {
        __src = (wchar_t *)&local_18;
      }
      _wcsncpy(param_2,__src,0x100);
    }
    if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_18);
    }
  }
  return;
}
