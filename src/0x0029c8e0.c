/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54F64FDA2722E2816A26A8EB770C82FE333CE37123A03650F5046C584BD51AE5
 * Entry: 0x0029c8e0, Ghidra index: 9447, label: FUN_0029c8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00403e50;
extern uint32_t DAT_00404a84;
extern uint32_t PTR_s_userdata_003b95ec;
extern char s_cannot__s_constant___d__type__d___00403d14[];
extern char s_unexpected_end_of_file_in__s_00403e8c[];
void FUN_0029c8e0(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  int local_8;
  
  iVar1 = param_1;
  iVar2 = FUN_0029c5b0();
  uVar3 = FUN_0029c5b0();
  uVar3 = uVar3 | iVar2 << 0x10;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (uVar3 != 0) {
    uVar4 = FUN_00294b90(0,uVar3 << 4);
    *(undefined4 *)(param_1 + 8) = uVar4;
    param_1 = 0;
    if (0 < (int)uVar3) {
      local_8 = 0;
      do {
        iVar2 = *in_EAX;
        piVar7 = (int *)(*(int *)(iVar1 + 8) + local_8);
        *in_EAX = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          uVar6 = (*(code *)in_EAX[2])();
        }
        else {
          uVar6 = (uint)*(byte *)in_EAX[1];
          in_EAX[1] = (int)((byte *)in_EAX[1] + 1);
        }
        if (uVar6 == 0xffffffff) {
          FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,in_EAX[4]);
        }
        iVar2 = -uVar6;
        *piVar7 = iVar2;
        switch(iVar2) {
        case -6:
          break;
        default:
          if ((iVar2 < 1) && (-0xc < iVar2)) {
            puVar5 = (&PTR_s_userdata_003b95ec)[uVar6];
          }
          else {
            puVar5 = &DAT_00404a84;
          }
          FUN_00295370(s_cannot__s_constant___d__type__d___00403d14,&DAT_00403e50,param_1,iVar2,
                       puVar5,iVar1,*(int *)(iVar1 + 0x18) + 0x28,*(undefined4 *)(iVar1 + 0x14));
          break;
        case -4:
          iVar2 = FUN_0029ca40();
          piVar7[2] = iVar2;
          break;
        case -2:
          iVar2 = FUN_0029c7a0();
          piVar7[2] = iVar2;
          break;
        case -1:
          fVar8 = (float10)FUN_0029c670();
          *(double *)(piVar7 + 2) = (double)fVar8;
        }
        param_1 = param_1 + 1;
        local_8 = local_8 + 0x10;
      } while (param_1 < (int)uVar3);
    }
  }
  return;
}
