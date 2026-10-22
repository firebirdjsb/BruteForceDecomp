/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FC849E171AF7A1408E5A4D3E4B51147669A528B24C5B4ABE03DC6380D175BDE
 * Entry: 0x002317e0, Ghidra index: 7754, label: FUN_002317e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_002317e0(float param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  float10 fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = (int)param_1;
  local_4 = *(undefined4 *)(unaff_ESI + 0x234 + (int)param_1 * 0xc);
  local_8 = *(undefined4 *)(unaff_ESI + 0x230 + (int)param_1 * 0xc);
  iVar3 = unaff_ESI + (int)param_1 * 0xc;
  local_c = *(undefined4 *)(iVar3 + 0x22c);
  local_10 = *(undefined4 *)(iVar3 + 0x264);
  param_1 = *(float *)(iVar3 + 0x260);
  local_18 = *(undefined4 *)(iVar3 + 0x25c);
  local_14 = param_1;
  fVar4 = (float10)FUN_002324c0();
  param_1 = (float)fVar4;
  cVar2 = FUN_00230860(unaff_ESI,iVar1,&local_c,&local_18,&param_1,1);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(int *)(unaff_ESI + 0x290) == 0) {
    *(undefined4 *)(unaff_ESI + 0x290) = *(undefined4 *)(*(int *)(unaff_ESI + 0x228) + 0xa4);
    if (*(int *)(*(int *)(unaff_ESI + 0x228) + 0xac) != DAT_0046d064) {
      iVar3 = FUN_000da800();
      if (iVar3 != 0) {
        FUN_002312e0(unaff_ESI,iVar1,iVar3,param_1);
        return 1;
      }
    }
  }
  else {
    *(int *)(unaff_ESI + 0x290) = *(int *)(unaff_ESI + 0x290) + -1;
  }
  return 1;
}
