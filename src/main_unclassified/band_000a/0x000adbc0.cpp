/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81C713B6C88EF0FBE8BA7FCF40E6E109134265CF6396CEF646D99092A230872B
 * Entry: 0x000adbc0, Ghidra index: 2078, label: FUN_000adbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x000BA5B0 constructor draft accepts one 32-bit
 * word-pointer argument. Xbox guest object layout/ABI remain UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b1050(void);
extern void FUN_0025ae60(void);
extern undefined4 FUN_000ba6d0(void);
extern int FUN_000a7770(uint *param_1);

extern uint32_t PTR_FUN_003a006c;
void FUN_000adbc0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *unaff_ESI;
  undefined1 local_5;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  *unaff_ESI = &PTR_FUN_003a006c;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  uVar3 = FUN_000b1050(unaff_ESI + 0xf);
  unaff_ESI[0x10] = uVar3;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  *(undefined1 *)(unaff_ESI + 0x1e) = local_5;
  iVar4 = FUN_0025ae60(unaff_ESI + 0x1e);
  unaff_ESI[0x1f] = iVar4;
  *(undefined1 *)(iVar4 + 0x15) = 1;
  *(undefined4 *)(unaff_ESI[0x1f] + 4) = unaff_ESI[0x1f];
  *(undefined4 *)unaff_ESI[0x1f] = unaff_ESI[0x1f];
  *(undefined4 *)(unaff_ESI[0x1f] + 8) = unaff_ESI[0x1f];
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x35] = 0x40;
  unaff_ESI[0x36] = 0x40;
  unaff_ESI[0x29] = 0x3f800000;
  unaff_ESI[0x2b] = 0x3f800000;
  *(byte *)(unaff_ESI + 0xb) = *(byte *)(unaff_ESI + 0xb) & 0xfc;
  unaff_ESI[0x22] = 0x27;
  unaff_ESI[0x24] = 0x42c80000;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x37] = 1;
  unaff_ESI[0x27] = 0x41000000;
  unaff_ESI[0x26] = 0x3e800000;
  unaff_ESI[0x28] = 0x3e99999a;
  unaff_ESI[0x2a] = 0x40400000;
  unaff_ESI[0x23] = 0x42c80000;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x80;
  *(undefined2 *)(unaff_ESI + 3) = 0x80;
  local_4 = 0x17d0ee37;
  FUN_000ba6d0();
  local_4 = 0x1fbc4e99;
  piVar5 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xc];
  if (piVar1 != piVar5) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xc] = 0;
    }
    unaff_ESI[0xc] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  local_4 = 0xecea7a68;
  piVar5 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xd];
  if (piVar1 != piVar5) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xd] = 0;
    }
    unaff_ESI[0xd] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  local_4 = 0xfcebfc70;
  piVar5 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xe];
  if (piVar1 != piVar5) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xe] = 0;
    }
    unaff_ESI[0xe] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  puVar2 = (undefined4 *)unaff_ESI[0x10];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(&local_4,uVar3,puVar2);
  if (unaff_ESI[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x13]);
  }
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  *(byte *)(unaff_ESI + 0xb) = *(byte *)(unaff_ESI + 0xb) | 4;
  return;
}
