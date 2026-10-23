/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8A0765E4F6BF20CFB01C759EDE712CD817A01BDDB10B7AA5B6441AAA8FEA149
 * Entry: 0x000fff00, Ghidra index: 3211, label: FUN_000fff00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
uint FUN_000fff00(void)

{
  int iVar1;
  uint uVar2;
  uint extraout_EDX;
  int unaff_EDI;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(unaff_EDI + 0x60);
  uVar2 = 0;
  if (((iVar1 < 0) || (0x18 < iVar1)) ||
     (iVar1 = *(int *)(DAT_00469948 + 0x250 + iVar1 * 4), iVar1 == 0)) {
    return 0;
  }
  local_4 = *(float *)(iVar1 + 0x78);
  local_8 = *(float *)(iVar1 + 0x7c);
  if (ABS(local_4) < 0.2) {
    local_4 = 0.0;
  }
  if (ABS(local_8) < 0.2) {
    local_8 = 0.0;
  }
  if ((local_4 != 0.0) || (local_8 != 0.0)) {
    if (*(float *)(unaff_EDI + 0x84) < 0.0 != (*(float *)(unaff_EDI + 0x84) == 0.0)) {
      FUN_000ffeb0();
      uVar2 = extraout_EDX;
      if (local_4 != local_8) {
        if ((local_4 == 0.0) || (local_8 == 0.0)) {
LAB_00100008:
          if (0.0 <= local_4) {
            if (0.0 < local_4) {
              uVar2 = 0x10;
            }
          }
          else {
            uVar2 = 8;
          }
        }
        else {
          if (ABS(local_8) < ABS(local_4)) {
            local_8 = 0.0;
            goto LAB_00100008;
          }
          local_4 = 0.0;
        }
        if (0.0 <= local_8) {
          if (0.0 < local_8) {
            uVar2 = uVar2 | 0x40;
          }
        }
        else {
          uVar2 = uVar2 | 0x20;
        }
      }
    }
    if (local_8 != 0.0) goto LAB_001000a0;
  }
  if (local_4 == 0.0) {
    *(undefined4 *)(unaff_EDI + 0x84) = 0;
    *(undefined4 *)(unaff_EDI + 0x88) = 0;
  }
LAB_001000a0:
  if (*(float *)(iVar1 + 0x80) != 0.0) {
    uVar2 = uVar2 | 1;
  }
  if (*(float *)(iVar1 + 0x8c) != 0.0) {
    uVar2 = uVar2 | 4;
  }
  if (*(float *)(iVar1 + 0x94) != 0.0) {
    uVar2 = uVar2 | 0x2000;
  }
  if (*(float *)(iVar1 + 0x90) != 0.0) {
    uVar2 = uVar2 | 2;
  }
  if (*(float *)(iVar1 + 0x9c) != 0.0) {
    uVar2 = uVar2 | 0x100;
  }
  if (*(float *)(iVar1 + 0xa0) != 0.0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*(float *)(iVar1 + 0xa4) != 0.0) {
    uVar2 = uVar2 | 0x200;
  }
  if (*(float *)(iVar1 + 0x104) != 0.0) {
    uVar2 = uVar2 | 0x400;
  }
  if (*(float *)(iVar1 + 0xd0) != 0.0) {
    uVar2 = uVar2 | 0x1000;
  }
  if (*(float *)(iVar1 + 0xcc) != 0.0) {
    uVar2 = uVar2 | 0x800;
  }
  return uVar2;
}
