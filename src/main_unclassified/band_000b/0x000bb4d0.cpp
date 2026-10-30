/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DFF128E334BCCABB7E757398BE54ADFAFFFDF5796F2DF609F18329051CC3AAF
 * Entry: 0x000bb4d0, Ghidra index: 2273, label: FUN_000bb4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++ declaration matches one guest DWORD-pointer argument in the
 * 0x000BA5B0 Ghidra draft; original guest ABI remains UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000c97e0(void);

extern uint32_t PTR_FUN_0039f9b0;
undefined4 * FUN_000bb4d0(undefined4 *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_8 [2];
  
  iVar3 = param_2;
  puVar4 = param_1;
  FUN_000ba5b0(param_1);
  *param_1 = &PTR_FUN_0039f9b0;
  iVar5 = FUN_002ea01d(0x48);
  if (iVar5 == 0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)FUN_000c97e0();
  }
  puVar4[0xb] = param_1;
  local_8[0] = 0x10;
  local_8[1] = 8;
  if (iVar3 < 0x11) {
    piVar7 = local_8 + 1;
    if (7 < iVar3) {
      piVar7 = &param_2;
    }
  }
  else {
    piVar7 = local_8;
  }
  piVar2 = *(int **)((int)param_1 + 0x24);
  param_2 = 0xc626fd5;
  if (((piVar2 == (int *)0x0) || (*piVar2 != 0xc626fd5)) || (piVar2[1] != *piVar7)) {
    uVar6 = FUN_000cd9c0();
    *(undefined4 *)((int)param_1 + 0x24) = uVar6;
  }
  iVar3 = puVar4[0xb];
  *(undefined1 *)(iVar3 + 0x38) = 0x80;
  *(undefined1 *)(iVar3 + 0x3a) = 0x80;
  *(undefined1 *)(iVar3 + 0x39) = 0x80;
  *(byte *)(puVar4[0xb] + 0x3b) = *(byte *)(puVar4[0xb] + 0x3b) | 1;
  *(byte *)(puVar4[0xb] + 0x3b) = *(byte *)(puVar4[0xb] + 0x3b) | 0x10;
  sVar1 = *(short *)((int)puVar4 + 10);
  iVar3 = puVar4[0xb];
  *(int *)(iVar3 + 0x28) = (int)*(short *)(puVar4 + 2);
  *(int *)(iVar3 + 0x2c) = (int)sVar1;
  *(byte *)(puVar4[0xb] + 0x3b) = *(byte *)(puVar4[0xb] + 0x3b) | 4;
  *(byte *)(puVar4[0xb] + 0x3b) = *(byte *)(puVar4[0xb] + 0x3b) | 2;
  puVar4[0x10] = 0xffffffff;
  puVar4[0x11] = 0xffffffff;
  *(byte *)(puVar4 + 0x12) = *(byte *)(puVar4 + 0x12) & 0xe3 | 3;
  *(byte *)((int)puVar4 + 0x13) = *(byte *)((int)puVar4 + 0x13) | 2;
  *(undefined1 *)((int)puVar4 + 0x31) = 1;
  *(undefined1 *)(puVar4 + 0xc) = 1;
  *(undefined1 *)((int)puVar4 + 0x32) = 0x28;
  *(undefined1 *)((int)puVar4 + 0x35) = 1;
  *(undefined1 *)(puVar4 + 0xd) = 1;
  *(undefined1 *)((int)puVar4 + 0x36) = 200;
  puVar4[0xf] = 0;
  return puVar4;
}
