/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE0D37E2011379EA47BEB76A5CE5055F1D9687FDC9E9DAEA0F6050B891309766
 * Entry: 0x001ecab0, Ghidra index: 6917, label: FUN_001ecab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_003bc760;
extern uint32_t DAT_003bc764;
extern uint32_t DAT_003bc934;
extern uint32_t DAT_003bc938;
extern uint32_t DAT_003bc93c;
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469960;
extern char s_Parameters_004071bc[];
undefined4 FUN_001ecab0(uint *param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint auStack_258 [2];
  char cStack_24e;
  char cStack_24d;
  char cStack_24c;
  char cStack_24b;
  char cStack_24a;
  char cStack_249;
  uint auStack_234 [131];
  undefined4 uStack_28;
  uint uStack_18;
  uint uStack_14;
  
  if (*(int *)(*(int *)(in_EAX + 0x18) + 0x4898) == 5) {
    FUN_002e7070(0);
  }
  iVar1 = DAT_00469948;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  uVar2 = param_1[0x81];
  FUN_002e66d0(*(byte *)(iVar1 + 0x7c) & 0xf);
  iVar1 = FUN_002e6ce0((&DAT_003bc760)[uVar2 * 2],(&DAT_003bc764)[uVar2 * 2]);
  *(undefined4 *)(in_EAX + 0x1c) = 1;
  FUN_002e4850(0,1);
  FUN_002e4850(1,*(char *)(&DAT_003bc764 + uVar2 * 2) + -1);
  FUN_002e4850(2,1);
  FUN_002e4850(3,*(char *)(&DAT_003bc760 + uVar2 * 2) + -1);
  FUN_002e4850(4,0);
  FUN_002e4850(5,0);
  FUN_002e4850(6,0);
  FUN_002e4850(7,0);
  puVar6 = auStack_234;
  for (iVar5 = 0x89; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  auStack_234[0] = 0;
  do {
    iVar5 = FUN_0034506e(auStack_258);
  } while (iVar5 == 0);
  if (iVar5 == 1) {
    auStack_258[0] = XAPILIB__GetTickCount();
  }
  else if (auStack_258[0] == 0) {
    uVar2 = *(uint *)(&DAT_003bc150 +
                     (((uint)(byte)(&DAT_003bc550)[cStack_24d] ^
                      *(uint *)(&DAT_003bc150 + (uint)(byte)(&DAT_003bc550)[cStack_24e] * 4)) & 0xff
                     ) * 4) ^
            *(uint *)(&DAT_003bc150 + (uint)(byte)(&DAT_003bc550)[cStack_24e] * 4) >> 8;
    uVar2 = *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cStack_24c] ^ uVar2) & 0xff) * 4) ^
            uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cStack_24b] ^ uVar2) & 0xff) * 4) ^
            uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cStack_24a] ^ uVar2) & 0xff) * 4) ^
            uVar2 >> 8;
    auStack_258[0] =
         ~(*(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cStack_249] ^ uVar2) & 0xff) * 4) ^
          uVar2 >> 8);
  }
  uStack_14 = uStack_14 ^ (DAT_003bc93c ^ uStack_14) & 0xf;
  uStack_28 = DAT_00469960;
  uStack_18 = uStack_18 & 0x7fffff8 | DAT_003bc938 << 0x1b | 8;
  uStack_14 = uStack_14 ^ (DAT_003bc934 << 4 ^ uStack_14) & 0xf0;
  auStack_234[0] = auStack_258[0];
  FUN_002e4980(s_Parameters_004071bc,auStack_234,0x224);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc);
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = *puVar3;
      goto LAB_001ecd1a;
    }
  }
  uVar4 = 0;
LAB_001ecd1a:
  iVar5 = FUN_001eddf0(uVar4);
  if (iVar5 == 0) {
    *(int *)(in_EAX + 0x28 + *(int *)(in_EAX + 0x24) * 4) = iVar1;
    *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + 1;
  }
  iVar5 = FUN_002e5bf0(0);
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  FUN_002e5d90(1);
  FUN_001ed3a0();
  FUN_001ed360();
  *(undefined1 *)(in_EAX + 0x5771) = 0;
  *(undefined1 *)(in_EAX + 0x2e26) = 0;
  *(undefined4 *)(in_EAX + 0x2e20) = 0xffffffff;
  FUN_001ed310();
  *(undefined1 *)(in_EAX + 0x5630) = 1;
  *(undefined4 *)(in_EAX + 0xa4) = 0;
  *(undefined1 *)(in_EAX + 0x2e25) = 0;
  *(undefined4 *)(in_EAX + 0x5768) = 9;
  *(undefined1 *)(in_EAX + 0xa0) = 0;
  *(undefined4 *)(in_EAX + 0x5740) = 0;
  *(undefined4 *)(in_EAX + 0x5744) = 0;
  *(undefined4 *)(in_EAX + 0x5748) = 0;
  *(undefined4 *)(in_EAX + 0x574c) = 0;
  *(undefined4 *)(in_EAX + 0x5750) = 0;
  *(undefined4 *)(in_EAX + 0x5754) = 0;
  *(undefined4 *)(in_EAX + 0x5710) = 0;
  *(undefined4 *)(in_EAX + 0x5714) = 0;
  *(undefined4 *)(in_EAX + 0x5718) = 0;
  *(undefined4 *)(in_EAX + 0x571c) = 0;
  *(undefined4 *)(in_EAX + 0x5720) = 0;
  *(undefined4 *)(in_EAX + 0x5724) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 2;
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc);
    if (puVar3 != (undefined4 *)0x0) {
      return *puVar3;
    }
  }
  return 0;
}
