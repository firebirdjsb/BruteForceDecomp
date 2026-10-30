/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A8DE5007D86A525234446E61B1813B6480F36427FDAAF5E183E0995CF3957EC
 * Entry: 0x000c2330, Ghidra index: 2369, label: FUN_000c2330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000c2440(int param_1,char param_2);
extern void FUN_000b25a0(int param_1,int *param_2);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

extern uint32_t DAT_003ffd80;
extern uint32_t DAT_00469ab0;
int FUN_000c2330(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_4;
  
  iVar2 = FUN_000c2440(in_EAX,0);
  if (iVar2 == 0) {
    iVar2 = FUN_000b9120(DAT_00469ab0);
    if (iVar2 != 0) {
      if (in_ECX + 0x2c != 0) {
        FUN_000b25a0(in_ECX + 0x2c,iVar2);
      }
      *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
    }
    local_4 = iVar2;
    if (*(int *)(iVar2 + 0x44) != in_EAX) {
      FUN_0008f6a0();
    }
    iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x34) + 0x30) + 0xc);
    iVar3 = (**(code **)(*(int *)(in_EAX + 0x1b4) + 0x9c))();
    if ((((iVar3 == -1) || (iVar1 == -1)) || (iVar3 != iVar1)) ||
       ((&DAT_003ffd80)[iVar3 * 10 + iVar1] != '\0')) {
      *(undefined4 *)(iVar2 + 0x4c) = 0xff0000c8;
    }
    else {
      *(undefined4 *)(iVar2 + 0x4c) = 0xff00c800;
    }
    iVar1 = *(int *)(in_ECX + 0x68);
    iVar3 = FUN_000ff730(in_ECX + 100,iVar1,*(undefined4 *)(iVar1 + 4),&local_4);
    FUN_000b2a50();
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return iVar2;
}
