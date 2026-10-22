/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5466897AEC4062F8974A44A8A79220D7FACBEF6263658C35E76091A16116400
 * Entry: 0x00373010, Ghidra index: 13404, label: FUN_00373010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00181e28;
undefined4 * FUN_00373010(void)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_EAX;
  int iVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = D3D8__D3DRS_TwoSidedLighting;
  iVar3 = D3D8__D3D_g_pDevice;
  fVar1 = *(float *)(D3D8__D3D_g_pDevice + 0xaf0);
  *in_EAX = 0x1809e0;
  FUN_00376020(fVar1);
  FUN_00376020(fVar1 * 0.5);
  in_EAX[1] = local_10;
  in_EAX[2] = local_c;
  in_EAX[4] = local_8;
  in_EAX[3] = (local_10 + 1.0) - local_c;
  in_EAX[5] = local_4;
  in_EAX[6] = (local_8 + 1.0) - local_4;
  for (; puVar2 = in_EAX + 7, iVar4 != 0; iVar4 = iVar4 + -1) {
    fVar1 = *(float *)(iVar3 + 0xb34);
    *puVar2 = &DAT_00181e28;
    FUN_00376020(fVar1);
    FUN_00376020(fVar1 * 0.5);
    in_EAX[8] = local_10;
    in_EAX[9] = local_c;
    in_EAX[10] = (local_10 + 1.0) - local_c;
    in_EAX[0xb] = local_8;
    in_EAX[0xc] = local_4;
    in_EAX[0xd] = (local_8 + 1.0) - local_4;
    in_EAX = puVar2;
  }
  return puVar2;
}
