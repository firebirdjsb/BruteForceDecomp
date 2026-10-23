/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07D58216A4B2287B66BFFB4B4EAE6664B43BE447F6EA3FBD252A94BA982C0FFD
 * Entry: 0x0033cb57, Ghidra index: 12566, label: FUN_0033cb57
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094a;
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b0950;
int FUN_0033cb57(int param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_8;
  
  piVar7 = param_2;
  iVar3 = param_2[2];
  *param_2 = 0;
  if (*(short *)(&DAT_004b094a + *in_ECX * 10) == 0) {
    return 0;
  }
  uStack_8 = in_ECX;
  FUN_0033bda0(0);
  if (*(char *)(in_ECX[0x20b] * 0x200 + in_ECX[3] + in_ECX[0x20c]) == '*') goto LAB_0033ccda;
  FUN_0033c0d7(in_ECX[3],in_ECX + 0x209,*(ushort *)(&DAT_004b094c + *in_ECX * 10) + 5,in_ECX + 9);
  iVar3 = FUN_0033c472(iVar3,(undefined4 *)((int)in_ECX + 0x29));
  *piVar7 = iVar3;
  if (iVar3 == 0) goto LAB_0033ccda;
  if (param_1 != 0) {
    uVar2 = *(ushort *)(&DAT_004b094c + *in_ECX * 10);
    puVar5 = (undefined4 *)((int)in_ECX + 0x29);
    puVar6 = (undefined4 *)piVar7[2];
    for (uVar4 = (uint)(uVar2 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar2 & 3; piVar7 = param_2, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  piVar1 = in_ECX + 0x209;
  FUN_0033c0d7(in_ECX[3],piVar1,1,(int)&param_1 + 3);
  FUN_0033bbd6(1);
  FUN_0033c0d7(in_ECX[3],piVar1,4,in_ECX + 0x211);
  piVar7[1] = 1;
  FUN_0033bbd6(*(ushort *)(&DAT_004b094c + *in_ECX * 10) + 4);
  if (*(short *)(&DAT_004b0950 + *in_ECX * 10) == 0) {
LAB_0033cc86:
    piVar7[1] = 0;
  }
  else if (piVar7[4] != 0) {
    FUN_0033c0d7(in_ECX[3],piVar1,piVar7[3],piVar7[4]);
    goto LAB_0033cc86;
  }
  FUN_0033bbd6(*(undefined2 *)(&DAT_004b0950 + *in_ECX * 10));
  FUN_0033c0d7(in_ECX[3],piVar1,1,(int)&uStack_8 + 3);
  if (param_1._3_1_ != uStack_8._3_1_) {
    *piVar7 = 0;
    FUN_0033bda0(0);
    *(undefined1 *)(in_ECX[0x20b] * 0x200 + in_ECX[0x20c] + in_ECX[3]) = 0x2a;
  }
LAB_0033ccda:
  in_ECX[0x212] = *piVar7;
  return *piVar7;
}
