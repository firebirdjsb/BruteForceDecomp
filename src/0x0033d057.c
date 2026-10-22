/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5549B8B36CDC9B58C03211C427DC4E4C2A8ABADC5A0407E2890D99132D9D257F
 * Entry: 0x0033d057, Ghidra index: 12572, label: FUN_0033d057
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094c;
undefined4 FUN_0033d057(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  
  piVar4 = in_ECX + 9;
  FUN_0033be1d(in_ECX[0x211]);
  FUN_0033c0d7(in_ECX[3],in_ECX + 0x209,*(ushort *)(&DAT_004b094c + *in_ECX * 10) + 5,piVar4);
  iVar1 = FUN_0033c472(*(undefined4 *)(param_1 + 8),(int)in_ECX + 0x29);
  if (iVar1 == 0) {
    uVar2 = 0x80004005;
  }
  else {
    *(char *)(in_ECX + 0x20f) = (char)*piVar4;
    FUN_0033bed7();
    uVar3 = in_ECX[0x20d] - in_ECX[0x20b];
    if (uVar3 < 4) {
      uVar3 = uVar3 + 1;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x10);
      uVar3 = *(uint *)(param_1 + 0xc) >> 9;
    }
    FUN_0033ee35(in_ECX[1],piVar4,uVar3 << 9,in_ECX[0x20b] << 9,0,in_ECX[0x22e],param_2);
    uVar2 = FUN_0033edd5(param_2,1);
  }
  return uVar2;
}
