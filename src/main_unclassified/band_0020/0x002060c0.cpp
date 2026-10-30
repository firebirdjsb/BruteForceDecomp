/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 714AFD3C9B0865956CB33B984817AB2572460BEE83805C0F8637529780562468
 * Entry: 0x002060c0, Ghidra index: 7295, label: FUN_002060c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
undefined4 FUN_002060c0(void)

{
  int iVar1;
  int unaff_ESI;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  undefined1 uStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  float fStack_30;
  undefined1 uStack_2c;
  float fStack_8;
  
  iVar1 = FUN_0017c170(DAT_00469984);
  *(int *)(unaff_ESI + 0x44) = iVar1;
  if (iVar1 != 0) {
    (**(code **)(*DAT_00469940 + 0x50))
              (iVar1,*(undefined4 *)(unaff_ESI + 0x90),*(undefined4 *)(unaff_ESI + 0x94));
    FUN_0003f010();
    if (fStack_8 < 1.0 != (fStack_8 == 1.0)) {
      uStack_2c = 1;
      fStack_30 = fStack_8;
    }
    iVar1 = *(int *)(unaff_ESI + 0x54);
    if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
      /* XBE 0x00206142 PUSH EBP, 0x00206143 LEA ECX,[ESP+0x20]
       * -> auStack_78 (second 12-byte output);
       * 0x00206147 PUSH ECX; 0x00206148 LEA EDX,[ESP+0x18]
       * -> uStack_84/uStack_80/uStack_7c (first 12-byte output);
       * 0x0020614C PUSH EDX; 0x0020614F CALL 0x00205FB0.
       * FUN_00205FB0 copies precisely three DWORDs into each
       * output at 0x00206047..0x00206077. This is NOT a
       * synthetic host stack pointer or a one-DWORD output. */
      FUN_00205fb0(&uStack_84,(undefined4 *)auStack_78);
      uStack_50 = uStack_7c;
      uStack_6c = 1;
      uStack_4c = 1;
      uStack_58 = uStack_84;
      uStack_54 = uStack_80;
      if (*(float *)(unaff_ESI + 0x9c) < 0.0 == (*(float *)(unaff_ESI + 0x9c) == 0.0)) {
        uStack_48 = *(undefined4 *)(unaff_ESI + 0x9c);
      }
      else {
        iVar1 = FUN_0017beb0(unaff_ESI + 0x40);
        uStack_48 = *(undefined4 *)(iVar1 + 8);
      }
      uStack_44 = 1;
      if (*(float *)(unaff_ESI + 0x98) < 0.0 == (*(float *)(unaff_ESI + 0x98) == 0.0)) {
        uStack_40 = *(undefined4 *)(unaff_ESI + 0x98);
      }
      else {
        iVar1 = FUN_0017beb0(unaff_ESI + 0x40);
        uStack_40 = *(undefined4 *)(iVar1 + 0xc);
      }
      uStack_3c = 1;
    }
    (**(code **)(*DAT_00469940 + 0x28))
              (*(undefined4 *)(unaff_ESI + 0x44),auStack_78,*(undefined1 *)(unaff_ESI + 0x4c));
    return 1;
  }
  return 0;
}
