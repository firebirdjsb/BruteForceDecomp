/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63E94D1D08AAB998C19785FA9B9AA3203BCD69E9A2F8792B1936D405617CAF33
 * Entry: 0x001397b0, Ghidra index: 3958, label: FUN_001397b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t DAT_0046cfd8;
void FUN_001397b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_14;
  int local_10;
  uint local_c;
  
  piVar7 = (int *)(param_1 + 8);
  local_14 = 1;
  do {
    if (piVar7 == param_2) {
      return;
    }
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    uVar6 = 0x7fff;
    uVar5 = DAT_0046cfd8 & 0x7fff;
    if (0x7fff < local_14) {
      do {
        if (uVar6 == 0xffffffff) break;
        uVar6 = uVar6 << 0xf | 0x7fff;
        uVar5 = uVar5 << 0xf | 0x7fff;
      } while (uVar6 < local_14);
    }
    local_c = 0;
    piVar1 = (int *)(param_1 + (uVar5 % local_14) * 8);
    uVar5 = piVar7[1];
    if ((uVar5 != 0) && (local_c = uVar5, (uVar5 & 1) == 0)) {
      *(int **)(&DAT_00414da0 + (uVar5 * 0x19660d + 0x3c6ef35f >> 0x15) * 4) = &local_10;
    }
    uVar5 = piVar7[1];
    uVar6 = piVar1[1];
    if (uVar6 != uVar5) {
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        piVar7[1] = 0;
        iVar2 = *(int *)(&DAT_00414da0 + (uVar5 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        piVar4 = (int *)(&DAT_00414da0 + (uVar5 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (iVar2 != 0) {
          piVar3 = (int *)*piVar4;
          if (piVar3 == piVar7) {
            *piVar4 = *(int *)*piVar4;
            break;
          }
          piVar4 = piVar3;
          iVar2 = *piVar3;
        }
      }
      piVar7[1] = uVar6;
      if ((uVar6 != 0) && ((uVar6 & 1) == 0)) {
        uVar5 = uVar6 * 0x19660d + 0x3c6ef35f >> 0x15;
        *piVar7 = *(int *)(&DAT_00414da0 + uVar5 * 4);
        *(int **)(&DAT_00414da0 + uVar5 * 4) = piVar7;
      }
    }
    uVar5 = piVar1[1];
    if (uVar5 != local_c) {
      if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
        piVar1[1] = 0;
        iVar2 = *(int *)(&DAT_00414da0 + (uVar5 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        piVar4 = (int *)(&DAT_00414da0 + (uVar5 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (iVar2 != 0) {
          piVar3 = (int *)*piVar4;
          if (piVar3 == piVar1) {
            *piVar4 = *(int *)*piVar4;
            break;
          }
          piVar4 = piVar3;
          iVar2 = *piVar3;
        }
      }
      piVar1[1] = local_c;
      if ((local_c != 0) && ((local_c & 1) == 0)) {
        uVar5 = local_c * 0x19660d + 0x3c6ef35f >> 0x15;
        *piVar1 = *(int *)(&DAT_00414da0 + uVar5 * 4);
        *(int **)(&DAT_00414da0 + uVar5 * 4) = piVar1;
      }
    }
    if ((local_c != 0) && ((local_c & 1) == 0)) {
      iVar2 = *(int *)(&DAT_00414da0 + (local_c * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar1 = (int *)(&DAT_00414da0 + (local_c * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar4 = (int *)*piVar1;
        if (piVar4 == &local_10) {
          *piVar1 = *(int *)*piVar1;
          break;
        }
        piVar1 = piVar4;
        iVar2 = *piVar4;
      }
    }
    piVar7 = piVar7 + 2;
    local_14 = local_14 + 1;
  } while( true );
}
