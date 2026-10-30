/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89B11BDC338D3B35ACC91D56406D56E5D3168D580CB6AD631717DB9DB39C12C7
 * Entry: 0x000f2e40, Ghidra index: 3035, label: FUN_000f2e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
/* WARNING: Removing unreachable block (ram,0x000f2f7c) */

undefined1 FUN_000f2e40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  /* XBE 0x000F2E45 SUB ESP,0x20 reserves exactly 32 guest bytes.
   * Four register pushes then put stable ESP at entry S-0x30.
   * Original guest alloc base B=S-0x20 equals stable ESP+0x10.
   * B+0 is reused for error codes, B+4 passes the string output
   * to 0x0010CB00, B+8 holds inline storage or a guest pointer,
   * B+0x18 is string length and B+0x1C the small-string capacity.
   * The host/guest memory and implicit-register ABI remain TODO. */
  uint32_t guest_stack_words[8];
  _Static_assert(sizeof(guest_stack_words)==0x20,
                 "original 32-byte guest string/error packet");
  uint16_t original_zero_word = 0;
  
  iVar4 = **(int **)(DAT_00469b58 + 8);
  uVar2 = FUN_00102000();
  pbVar3 = (byte *)(**(code **)(iVar4 + 0x130))(uVar2);
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  for (piVar7 = *(int **)(param_1 + 0x74);
      (piVar8 = (int *)0x0, piVar7 != *(int **)(param_1 + 0x78) &&
      (piVar8 = (int *)*piVar7, piVar8[9] != -0xc60ef8b)); piVar7 = piVar7 + 1) {
  }
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  iVar4 = (**(code **)(*piVar8 + 4))();
  if (iVar4 != 3) {
    return 0;
  }
  puVar5 = (undefined4 *)FUN_0010c850();
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x158))(pbVar3,puVar5);
  piVar7 = DAT_00469b54;
  if (iVar4 == 0) {
    *(undefined4 *)(pbVar3 + 0x10) = *puVar5;
    *pbVar3 = *pbVar3 | 4;
    (**(code **)(*piVar7 + 0x48))(puVar5);
    iVar4 = FUN_000f2c20();
    if (iVar4 != -1) {
      iVar6 = (**(code **)(*DAT_00469b54 + 0x48))();
      *(int *)(pbVar3 + 0x9c) = iVar4 * 0x3c + *(int *)(iVar6 + 0xe0);
    }
    *pbVar3 = *pbVar3 | 0x20;
    FUN_001020a0();
    /* XBE 0x000F2F31 LEA [ESP+0x14] addresses B+4.
     * At 0xF2F36/F2F3E/F2F42 only the observed DWORD, DWORD
     * and WORD are initialized; do not zero the entire frame.
     * On return 0xF2F5C compares capacity at B+0x1C with 8:
     * short strings are stored inline at B+8, long strings use
     * the guest DWORD pointer stored at the same address. */
    guest_stack_words[7] = 7;
    guest_stack_words[6] = 0;
    memcpy((uint8_t *)guest_stack_words + 8,
           &original_zero_word, sizeof(original_zero_word));
    cVar1 = FUN_0010cb00((uint8_t *)guest_stack_words + 4);
    if (cVar1 != '\0') {
      uVar2 = FUN_00102000();
      void *guest_string =
          guest_stack_words[7] < 8
              ? (void *)&guest_stack_words[2]
              : (void *)(uintptr_t)guest_stack_words[2];
      FUN_000f2dc0(uVar2,guest_string);
    }
    return 1;
  }
  /* Original XBE 0x000F2F9D loads raw error DWORD into B+0;
   * 0x000F2FA6 LEA [ESP+0x10] passes that word to +0x22C. */
  guest_stack_words[0] = UINT32_C(0xfd890279);
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))
      (&guest_stack_words[0]);
  if (iVar4 == 1) {
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    guest_stack_words[0] = UINT32_C(0xed02be53);
  }
  else if (iVar4 == 2) {
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    guest_stack_words[0] = UINT32_C(0xf04087f4);
  }
  else {
    if (iVar4 != 3) goto LAB_000f3016;
    piVar7 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    guest_stack_words[0] = UINT32_C(0x14caa602);
  }
  /* XBE 0x000F300A points to same B+0 word after one PUSH.
   * Original call also carries the two trailing zero DWORDs. */
  (**(code **)(*piVar7 + 8))(&guest_stack_words[0],0,0);
LAB_000f3016:
  /* XBE 0x000F3025/2A passes the same B+0 error word again. */
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))
      (&guest_stack_words[0]);
  return 0;
}
