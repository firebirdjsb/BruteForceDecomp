/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81A1DB011AE5B989BEE2F130DF19A2B1F869DCBF49CB55A53DF8BB310ADAD991
 * Entry: 0x00377a50, Ghidra index: 13460, label: FUN_00377a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00377a50(void)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  int *in_EAX;
  int iVar4;
  uint uVar5;
  /* Original x86 EBP status: 0 by default, 1 on nonzero
   * FUN_00377990 result, 2 when the matching counters advance.
   * At 0x00377B34-0x00377B45 three adjacent guest stack DWORDs
   * are written [0]=counter, [1]=second state, [2]=EBP status,
   * and their base is passed to the indirect callback.
   * Guest register EAX, callback ABI and memory relocation remain
   * ABI_UNVERIFIED; this is only a C11 storage reconstruction.
   */
  undefined4 guest_callback_status = 0;
  undefined4 guest_callback_words[3];
  
  iVar2 = *in_EAX;
  iVar4 = FUN_00377780();
  if (in_EAX[0x76] != 0) {
    in_EAX[0x75] = iVar4 - in_EAX[0x76];
  }
  in_EAX[0x76] = iVar4;
  in_EAX[0x70] = in_EAX[0x70] + 1;
  uVar1 = *(undefined1 *)(iVar2 + 0x6013d4);
  iVar4 = FUN_00377990();
  if (iVar4 != 0) {
    guest_callback_status = 1;
  }
  else if (in_EAX[0x70] == in_EAX[0x71]) {
    in_EAX[0x71] = in_EAX[0x71] + 1;
    guest_callback_status = 2;
  }
  if ((in_EAX[0x6d] & 0x1000000U) == 0) {
    bVar3 = in(0x80c0);
    uVar5 = ~(uint)(bVar3 >> 5) & 1;
    in_EAX[0x74] = uVar5;
    if ((in_EAX[2] & 0xc0000000U) == 0x40000000) {
      in_EAX[0x74] = (uint)(uVar5 == 0);
    }
  }
  do {
    *(undefined4 *)(iVar2 + 0x600100) = 1;
  } while ((*(uint *)(iVar2 + 0x100) & 0x1000000) != 0);
  KeSetEvent(in_EAX + 0x65,1,0);
  if ((code *)in_EAX[100] != (code *)0x0) {
    guest_callback_words[0] = (undefined4)in_EAX[0x70];
    guest_callback_words[1] = (undefined4)in_EAX[0x6f];
    guest_callback_words[2] = guest_callback_status;
    (*(code *)in_EAX[100])(guest_callback_words);
  }
  *(undefined1 *)(iVar2 + 0x6013d4) = uVar1;
  return 0;
}
