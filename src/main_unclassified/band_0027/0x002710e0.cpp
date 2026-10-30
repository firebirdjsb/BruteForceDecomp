/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B91D8C20F819F97D67056CABE45481D26D2982218D0DEB1F2F3ACE30F3AEB897
 * Entry: 0x002710e0, Ghidra index: 8808, label: FUN_002710e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* 0x271128/0x271159 load the low byte of the incoming pointer word,
 * not a byte at the pointed-to object. Guest address/ABI remain unverified. */
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392638;
undefined4 * FUN_002710e0(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  
  *param_1 = PTR_FUN_00392638;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x20) = bf_x86_word_load_byte(&param_1,0U);
  iVar11 = FUN_00277b90(param_1 + 0x20);
  param_1[0x21] = iVar11;
  *(undefined1 *)(iVar11 + 0x45) = 1;
  *(undefined4 *)(param_1[0x21] + 4) = param_1[0x21];
  *(undefined4 *)param_1[0x21] = param_1[0x21];
  *(undefined4 *)(param_1[0x21] + 8) = param_1[0x21];
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = bf_x86_word_load_byte(&param_1,0U);
  iVar11 = FUN_001f2750(param_1 + 0x23);
  param_1[0x24] = iVar11;
  *(undefined1 *)(iVar11 + 0x2d) = 1;
  *(undefined4 *)(param_1[0x24] + 4) = param_1[0x24];
  *(undefined4 *)param_1[0x24] = param_1[0x24];
  *(undefined4 *)(param_1[0x24] + 8) = param_1[0x24];
  param_1[0x25] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[1] = 0;
  pcVar2 = *(char **)(param_2 + 0x38);
  if (pcVar2 != (char *)0x0) {
    pcVar12 = pcVar2;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar2,(int)pcVar12 - (int)(pcVar2 + 1));
  }
  pcVar2 = *(char **)(param_2 + 0x3c);
  if (pcVar2 != (char *)0x0) {
    pcVar12 = pcVar2;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar2,(int)pcVar12 - (int)(pcVar2 + 1));
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  param_1[0x12] = *(undefined4 *)(param_2 + 8);
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar3;
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  uVar10 = *(undefined4 *)(param_2 + 0x30);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x14);
  param_1[0x16] = uVar4;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar6;
  param_1[0x1d] = uVar3;
  param_1[0x19] = uVar7;
  param_1[0x1a] = uVar8;
  param_1[0x1b] = uVar9;
  param_1[0x1c] = uVar10;
  return param_1;
}
