/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 361EB1D3C07E048E41D2D8C9B8A5DB160A1FD79CC288DD5EBC82A8258F66D851
 * Entry: 0x002b1bf0, Ghidra index: 9744, label: FUN_002b1bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443658;
extern uint32_t DAT_0044365c;
extern uint32_t DAT_00443680;
extern uint32_t DAT_00443ae0;
extern uint32_t DAT_00443ae4;
extern uint32_t DAT_00443ae8;
extern uint32_t DAT_00443aec;
extern uint32_t DAT_00443be0;
extern uint32_t DAT_00443be4;
extern uint32_t DAT_00443be8;
extern uint32_t DAT_00443bec;
extern uint32_t DAT_00469834;
extern uint32_t DAT_00469838;
undefined4 FUN_002b1bf0(int param_1)

{
  int in_EAX;
  float *in_ECX;
  undefined4 in_EDX;
  float *pfVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined2 *local_8;
  
  iVar2 = in_EAX * 0x48;
  *(undefined4 *)(&DAT_00443658 + iVar2) = in_EDX;
  *(int *)(&DAT_0044365c + iVar2) = param_1;
  local_c = 0;
  if (0 < param_1) {
    local_8 = (undefined2 *)(&DAT_00443680 + iVar2);
    do {
      iVar2 = 0;
      if (3 < DAT_00469834) {
        iVar3 = 3;
        pfVar1 = (float *)&DAT_00443be4;
        do {
          if (((*in_ECX == pfVar1[-1]) && (in_ECX[1] == *pfVar1)) && (in_ECX[2] == pfVar1[1]))
          goto LAB_002b1d55;
          if (((*in_ECX == pfVar1[3]) && (in_ECX[1] == pfVar1[4])) && (in_ECX[2] == pfVar1[5])) {
            iVar2 = iVar2 + 1;
            goto LAB_002b1d55;
          }
          if (((*in_ECX == pfVar1[7]) && (in_ECX[1] == pfVar1[8])) && (in_ECX[2] == pfVar1[9])) {
            iVar2 = iVar2 + 2;
            goto LAB_002b1d55;
          }
          if (((*in_ECX == pfVar1[0xb]) && (in_ECX[1] == pfVar1[0xc])) && (in_ECX[2] == pfVar1[0xd])
             ) {
            iVar2 = iVar2 + 3;
            goto LAB_002b1d55;
          }
          iVar3 = iVar3 + 4;
          iVar2 = iVar2 + 4;
          pfVar1 = pfVar1 + 0x10;
        } while (iVar3 < DAT_00469834);
      }
      if (iVar2 < DAT_00469834) {
        pfVar1 = (float *)(&DAT_00443be4 + iVar2 * 4);
        do {
          if (((*in_ECX == pfVar1[-1]) && (in_ECX[1] == *pfVar1)) && (in_ECX[2] == pfVar1[1]))
          break;
          iVar2 = iVar2 + 1;
          pfVar1 = pfVar1 + 4;
        } while (iVar2 < DAT_00469834);
      }
LAB_002b1d55:
      if (iVar2 == DAT_00469834) {
        (&DAT_00443be0)[iVar2 * 4] = *in_ECX;
        (&DAT_00443be4)[iVar2 * 4] = in_ECX[1];
        (&DAT_00443be8)[iVar2 * 4] = in_ECX[2];
        (&DAT_00443bec)[iVar2 * 4] = 0x3f800000;
        DAT_00469834 = DAT_00469834 + 1;
      }
      local_8[-0x10] = (short)iVar2;
      iVar2 = 0;
      if (3 < DAT_00469838) {
        iVar3 = 3;
        pfVar1 = (float *)&DAT_00443ae4;
        do {
          if ((in_ECX[3] == pfVar1[-1]) && (in_ECX[4] == *pfVar1)) goto LAB_002b1e60;
          if ((in_ECX[3] == pfVar1[3]) && (in_ECX[4] == pfVar1[4])) {
            iVar2 = iVar2 + 1;
            goto LAB_002b1e60;
          }
          if ((in_ECX[3] == pfVar1[7]) && (in_ECX[4] == pfVar1[8])) {
            iVar2 = iVar2 + 2;
            goto LAB_002b1e60;
          }
          if ((in_ECX[3] == pfVar1[0xb]) && (in_ECX[4] == pfVar1[0xc])) {
            iVar2 = iVar2 + 3;
            goto LAB_002b1e60;
          }
          iVar3 = iVar3 + 4;
          iVar2 = iVar2 + 4;
          pfVar1 = pfVar1 + 0x10;
        } while (iVar3 < DAT_00469838);
      }
      if (iVar2 < DAT_00469838) {
        pfVar1 = (float *)(&DAT_00443ae4 + iVar2 * 4);
        do {
          if ((in_ECX[3] == pfVar1[-1]) && (in_ECX[4] == *pfVar1)) break;
          iVar2 = iVar2 + 1;
          pfVar1 = pfVar1 + 4;
        } while (iVar2 < DAT_00469838);
      }
LAB_002b1e60:
      if (iVar2 == DAT_00469838) {
        (&DAT_00443ae0)[iVar2 * 4] = in_ECX[3];
        (&DAT_00443ae4)[iVar2 * 4] = in_ECX[4];
        (&DAT_00443ae8)[iVar2 * 4] = 0;
        (&DAT_00443aec)[iVar2 * 4] = 0x3f800000;
        DAT_00469838 = DAT_00469838 + 1;
      }
      *local_8 = (short)iVar2;
      if ((0xf < DAT_00469838) || (0x1f < DAT_00469834)) {
        return 0x80004005;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
      in_ECX = in_ECX + 5;
    } while (local_c < param_1);
  }
  return 0;
}
