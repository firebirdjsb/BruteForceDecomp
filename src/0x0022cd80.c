/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09CD8C63D8F24B98C7685A6795CCBB5A06618EF627F06C03A378A1C9838BFF94
 * Entry: 0x0022cd80, Ghidra index: 7699, label: FUN_0022cd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t DAT_0046d064;
void FUN_0022cd80(float param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int unaff_ESI;
  int unaff_EDI;
  int iVar4;
  float fVar5;
  float local_8;
  
  iVar4 = *(int *)(*(int *)(DAT_00469aac + 0xbd8) + 0x18 + *(int *)(unaff_ESI + 0x54) * 0x14);
  iVar1 = *(int *)(unaff_EDI + 0x2c4);
  local_8 = 1.0;
  if ((param_2 == '\0') && (local_8 = param_1 * 0.036, 0.9 < local_8)) {
    local_8 = 0.9;
  }
  uVar3 = *(uint *)(unaff_ESI + 0x44);
  _param_2 = *(int *)(iVar4 + 0x18);
  cVar2 = '\x01';
  if ((uVar3 != 0) && (uVar3 = -(uint)((*(byte *)(uVar3 + 0x26) & 0x40) != 0) & uVar3, uVar3 != 0))
  {
    cVar2 = (**(code **)(*(int *)(uVar3 + 0x48) + 8))(&param_2);
    cVar2 = '\x01' - (cVar2 != '\0');
  }
  param_1 = 0.0;
  if ((*(int *)(unaff_ESI + 0x38) == 0) &&
     ((2 < *(int *)(DAT_00469aac + 0xc6c) || (0.6 < *(float *)(DAT_00469aac + 0xc58))))) {
    param_1 = 1.4013e-45;
  }
  if (cVar2 != '\0') {
    iVar4 = *(int *)(iVar4 + iVar1 * 0x18 + 0x24);
    fVar5 = local_8;
    if (iVar4 == 0) {
      iVar4 = unaff_EDI + 0x278;
      fVar5 = 1.0;
    }
    FUN_0022cbe0(unaff_EDI,unaff_ESI,iVar4,fVar5,param_1);
  }
  if (_param_2 != DAT_0046d064) {
    FUN_0022cbe0(unaff_EDI,unaff_ESI,&param_2,local_8,param_1);
  }
  return;
}
