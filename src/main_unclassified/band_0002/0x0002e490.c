/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 891F0F02B028B3A6C53885B24A9416A9FFB396B5BCF814108766A4BDB1635C6F
 * Entry: 0x0002e490, Ghidra index: 304, label: FUN_0002e490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_LAB_0039cc18;
extern uint32_t PTR_LAB_003a3fcc;
undefined4 FUN_0002e490(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined1 local_188 [4];
  undefined **local_184;
  int local_178;
  int local_164;
  int local_144;
  undefined **local_128 [65];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  iVar2 = FUN_000120f0();
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x354) = 0;
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  *(byte *)(in_ECX + 0x350) = *(byte *)(in_ECX + 0x350) & 0xfa | 2;
  *(undefined4 *)(in_ECX + 0x4a8) = 0;
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  uVar3 = (*(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec)) - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_ECX + 0x3e4);
  }
  iVar6 = 0;
  if ((*(int *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar3 * 4) + 0x58) != 0) &&
     (iVar6 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x318)), iVar6 != 0)) {
    FUN_00023b20(0x25);
    local_1c = 0;
    local_18 = 0;
    local_24 = 0;
    local_20 = 1;
    local_14 = 0;
    local_128[0] = &PTR_LAB_003a3fcc;
    local_c = 0x41700000;
    local_10 = iVar2;
    FUN_0004d520(local_128,local_188);
    local_128[0] = &PTR_LAB_0039cc18;
    local_184 = &PTR_FUN_003a4f64;
    if (local_164 != 0) {
      FUN_0008f6e0();
    }
    if (local_178 != 0) {
      FUN_0008f6e0();
    }
  }
  if (*(int *)(in_ECX + 0x3ec) == 0) {
    FUN_00055a60(in_ECX + 0x3dc);
  }
  local_144 = *(int *)(in_ECX + 1000) + *(int *)(in_ECX + 0x3ec);
  uVar3 = local_144 - 1;
  if (*(uint *)(in_ECX + 0x3e4) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_ECX + 0x3e4);
  }
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x3e0) + uVar3 * 4) + 0x88) >> 0xd & 1) != 0) {
    *(undefined4 *)(in_ECX + 0x4a8) = 3;
    iVar4 = FUN_00055aa0();
    iVar4 = *(int *)(iVar4 + 0x14);
    if ((iVar4 != 0) &&
       ((iVar5 = FUN_00055aa0(), (*(byte *)(iVar5 + 0x88) & 4) == 0 ||
        ((*(byte *)(iVar4 + 0x28) & 1) == 0)))) {
      FUN_000120f0();
      FUN_0011dfa0();
      cVar1 = FUN_000416a0(in_ECX + 0x8f0,1);
      if (cVar1 == '\0') {
        FUN_0004e8f0();
        if (*(int *)(in_ECX + 0x4a8) == 0) {
          *(undefined4 *)(in_ECX + 0x4a8) = 2;
        }
        goto LAB_0002e6f6;
      }
      FUN_00025730(in_ECX + 0x8f0,1,0);
    }
  }
  if (*(int *)(in_ECX + 0x4a8) == 0) {
    cVar1 = FUN_00023ee0();
    *(uint *)(in_ECX + 0x4a8) = 2 - (uint)(cVar1 != '\0');
  }
LAB_0002e6f6:
  if (iVar6 != 0) {
    if ((*(int *)(in_ECX + 0x4a8) == 1) &&
       (cVar1 = FUN_0002e800(in_ECX + -0x40,iVar6), cVar1 == '\0')) {
      *(uint *)(iVar6 + 0x80) = *(uint *)(iVar6 + 0x80) | 0x40;
      *(undefined4 *)(iVar6 + 0x84) = 0x40000000;
      *(undefined4 *)(in_ECX + 0x4a8) = 2;
    }
    cVar1 = FUN_00023d00();
    if (cVar1 == '\0') {
      cVar1 = FUN_00023ee0();
      if (cVar1 == '\0') {
        FUN_00012320(0x5d);
        FUN_0004dff0(in_ECX + -0x40);
        FUN_00012440();
      }
      else {
        *(undefined4 *)(in_ECX + 0x4a8) = 1;
      }
    }
  }
  FUN_00140a60(*(undefined4 *)(*(int *)(iVar2 + 8) + 0xbe8),iVar2,0xf79cae7,0);
  return 1;
}
