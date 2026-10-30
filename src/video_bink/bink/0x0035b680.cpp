/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3FF21DD071F13A661216E296A1D0E1E7358ED2A33F667B84DC071811ACB934BC
 * Entry: 0x0035b680, Ghidra index: 13200, label: FUN_0035b680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b5170;
/* WARNING: Removing unreachable block (ram,0x0035b740) */
/* WARNING: Removing unreachable block (ram,0x0035b7b5) */

uint FUN_0035b680(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float10 fVar5;
  uint *puStack00000004;
  uint uStack0000000c;
  uint uStack00000010;
  int in_stack_0000408c;
  undefined4 in_stack_00004090;
  int in_stack_00004094;
  uint in_stack_00004098;
  undefined4 in_stack_0000409c;
  undefined4 in_stack_000040a0;
  uint *in_stack_000040a8;
  uint in_stack_000040ac;
  undefined4 in_stack_000040b0;
  /* Original fixed 0x4088-byte allocation: after four saved registers,
   * coefficient F32s start at S+0x30 and samples at S+0x98, with the
   * sample region ending at S+0x4098. Keep their 0x68-byte separation
   * inside one object so original overlap is not silently separated.
   * Guest ESP/probing, input bounds, x87 helpers and ABI stay UNVERIFIED. */
  float frame_f32[26 + 4096];
  
  FUN_002ebea0();
  uStack00000010 = 0;
  uStack0000000c = 0;
  puStack00000004 = in_stack_000040a8;
  if ((in_stack_00004098 & 1) != 0) {
    uStack0000000c = *in_stack_000040a8 >> 2;
    puStack00000004 = in_stack_000040a8 + 1;
    uStack00000010 = 0x1e;
  }
  pfVar4 = frame_f32 + 26;
  for (iVar2 = in_stack_00004094; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (uStack00000010 < 0x1d) {
      uVar3 = *puStack00000004 >> (0x1d - (byte)uStack00000010 & 0x1f);
      uStack0000000c = *puStack00000004 << ((byte)uStack00000010 & 0x1f) | uStack0000000c;
      uStack00000010 = uStack00000010 + 3;
      puStack00000004 = puStack00000004 + 1;
    }
    else {
      uVar3 = uStack0000000c >> 0x1d;
      uStack00000010 = uStack00000010 - 0x1d;
    }
    fVar1 = (float)((uStack0000000c & 0x1fffffff) >> 5 & 0x77fffff) *
            (float)*(double *)(&DAT_004b5170 + (uStack0000000c & 0x1f) * 8);
    if ((uStack0000000c & 0x10000000) != 0) {
      fVar1 = -fVar1;
    }
    *pfVar4 = fVar1;
    if (uStack00000010 < 0x1d) {
      uStack0000000c = *puStack00000004 >> (0x1d - (byte)uStack00000010 & 0x1f);
      uVar3 = *puStack00000004 << ((byte)uStack00000010 & 0x1f) | uVar3;
      uStack00000010 = uStack00000010 + 3;
      puStack00000004 = puStack00000004 + 1;
    }
    else {
      uStack0000000c = uVar3 >> 0x1d;
      uStack00000010 = uStack00000010 - 0x1d;
    }
    fVar1 = (float)((uVar3 & 0x1fffffff) >> 5 & 0x77fffff) *
            (float)*(double *)(&DAT_004b5170 + (uVar3 & 0x1f) * 8);
    if ((uVar3 & 0x10000000) != 0) {
      fVar1 = -fVar1;
    }
    pfVar4[1] = fVar1;
    uVar3 = 0;
    if (in_stack_000040ac != 0) {
      do {
        if (uStack00000010 < 8) {
          uStack0000000c = *puStack00000004 >> (8U - (char)uStack00000010 & 0x1f);
          uStack00000010 = uStack00000010 + 0x18;
          puStack00000004 = puStack00000004 + 1;
        }
        else {
          uStack0000000c = uStack0000000c >> 8;
          uStack00000010 = uStack00000010 - 8;
        }
        fVar5 = (float10)thunk_FUN_002ebfbe();
        frame_f32[uVar3] = (float)fVar5;
        uVar3 = uVar3 + 1;
      } while (uVar3 < in_stack_000040ac);
    }
    FUN_0035b390(pfVar4,in_stack_0000408c,frame_f32,in_stack_000040b0);
    if ((in_stack_00004098 & 1) == 0) {
      FUN_002fde80(in_stack_0000408c,0xffffffff,pfVar4,in_stack_0000409c,in_stack_000040a0);
    }
    else {
      FUN_002fdfc0(in_stack_0000408c,1,pfVar4,in_stack_0000409c,in_stack_000040a0);
    }
    pfVar4 = pfVar4 + in_stack_0000408c;
  }
  if (in_stack_00004094 == 1) {
    FUN_0035b2c0(in_stack_00004090);
  }
  else {
    FUN_0035b310(in_stack_00004090);
  }
  return (int)puStack00000004 - (int)in_stack_000040a8 & 0x1fffffff;
}
