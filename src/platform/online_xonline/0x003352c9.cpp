/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5837AD334EBAE951A1710B5EF23965C4D0DE72A9FCD89A9C47D7B68574FDB39F
 * Entry: 0x003352c9, Ghidra index: 12424, label: FUN_003352c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s__xpnfront_xnotification_srf_003b760c;
int FUN_003352c9(int param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (((*(int *)(param_3 + 0x3c) == 0) || (*(int *)(param_3 + 0x40) != 0x34)) ||
     (*(int *)(param_3 + 0x44) == 0)) {
    iVar3 = -0x7feafff9;
  }
  else {
    local_8 = FUN_0033e9f8(0x10,0x8021);
    if (local_8 == 0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      *(undefined4 *)(local_8 + 8) = 0;
      *(undefined4 *)(local_8 + 0xc) = 1;
      puVar2 = *(undefined4 **)(param_3 + 0x3c);
      piVar1 = (int *)(in_ECX + 0x15b0);
      *puVar2 = 8;
      puVar2[1] = 0x14;
      puVar2[2] = *piVar1;
      *piVar1 = *piVar1 + 1;
      FUN_00347aa1(puVar2 + 3,0);
      puVar2[8] = *(undefined4 *)(param_1 * 0xb8 + 0x12d0 + in_ECX);
      puVar2[9] = *(undefined4 *)(param_1 * 0xb8 + 0x12d4 + in_ECX);
      *(undefined2 *)(puVar2 + 10) = param_2;
      *(undefined4 *)((int)puVar2 + 0x2a) = 0;
      *(undefined2 *)((int)puVar2 + 0x2e) = 0x14;
      puVar2[0xc] = 0x800;
      iVar3 = FUN_00338505(1,PTR_s__xpnfront_xnotification_srf_003b760c,
                           *(undefined4 *)(param_3 + 0x44),param_3 + 0x48,0,0,
                           *(undefined4 *)(param_3 + 0x3c),*(undefined4 *)(param_3 + 0x40),30000,
                           *(undefined4 *)(param_3 + 8),1,local_8);
      if (-1 < iVar3) {
        *(undefined4 *)(local_8 + 4) = *(undefined4 *)(param_3 + 0x18);
        *(int *)(param_3 + 0x18) = local_8;
        goto LAB_003353d3;
      }
    }
  }
  if (local_8 != 0) {
    FUN_0033ea20(local_8);
  }
LAB_003353d3:
  if (iVar3 == -0x7ff8d8b9) {
    iVar3 = -0x7feadffa;
  }
  return iVar3;
}
