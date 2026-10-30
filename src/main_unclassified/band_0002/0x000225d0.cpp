/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA8102DDCCBD9A06D762AE5476F4FBEE8B2875694DBB7C710725A80AA52A9040
 * Entry: 0x000225d0, Ghidra index: 198, label: FUN_000225d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00020170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_0011dfa0(void);
extern uint FUN_000594a0(int param_1,undefined4 *param_2,int param_3);
extern char FUN_000416a0(int param_1,uint param_2);
extern undefined4 FUN_00058740(void);
extern undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3);

extern uint32_t PTR_FUN_003a400c;
extern uint32_t PTR_LAB_003a4008;
undefined4 FUN_000225d0(undefined1 *param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBX;
  undefined **ppuStack_388;
  undefined ***pppuStack_384;
  undefined4 uStack_380;
  undefined **appuStack_368 [65];
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 *puStack_254;
  undefined1 auStack_250 [268];
  undefined4 uStack_144;
  undefined4 uStack_140;
  
  piVar4 = (int *)FUN_000120f0();
  iVar5 = (**(code **)(*piVar4 + 0x40))();
  FUN_00020170(piVar4,iVar5 + 0x24,0,0x41400000);
  puStack_254 = auStack_250;
  uStack_258 = uStack_140;
  uStack_25c = uStack_144;
  pppuStack_384 = appuStack_368;
  uStack_264 = 0;
  uStack_260 = 0;
  appuStack_368[0] = &PTR_LAB_003a4008;
  ppuStack_388 = &PTR_FUN_003a400c;
  uStack_380 = 10;
  iVar5 = FUN_0011dfa0(&ppuStack_388,0);
  iVar5 = FUN_000594a0(*(undefined4 *)(iVar5 + 0xc));
  if (iVar5 != 0) {
    FUN_000120f0();
    FUN_0011dfa0();
    cVar3 = FUN_000416a0(unaff_EBX + 0x930,0);
    if (cVar3 != '\0') {
      iVar2 = *(int *)(*(int *)(unaff_EBX + 0x934) + 0x14);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 8) + 4))();
      }
      FUN_00058740();
      FUN_00025730(unaff_EBX + 0x930,1,1);
      if (*(int *)(unaff_EBX + 0x6c0) != 0) {
        puVar1 = (uint *)(*(int *)(unaff_EBX + 0x6c0) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      *(int *)(unaff_EBX + 0x6c0) = iVar5;
      *(uint *)(iVar5 + 0x28) = *(uint *)(iVar5 + 0x28) | 1;
      *(undefined4 *)(unaff_EBX + 0x6ac) = 5;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 0x1c) = 3;
      return 1;
    }
  }
  *(undefined4 *)(unaff_EBX + 0x6ac) = 2;
  if (*(int *)(unaff_EBX + 0x6c0) != 0) {
    puVar1 = (uint *)(*(int *)(unaff_EBX + 0x6c0) + 0x28);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined4 *)(unaff_EBX + 0x6c0) = 0;
  *param_1 = 1;
  return 0;
}
