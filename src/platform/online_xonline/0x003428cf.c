/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75000006E229D98C19569A3E02B2D25240BC8A994F823CF6EFC90ED0B6F7562D
 * Entry: 0x003428cf, Ghidra index: 12693, label: FUN_003428cf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003b7678;
/* WARNING: Type propagation algorithm not settling */

int FUN_003428cf(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_430[0x82]; /* EBP-0x42c .. EBP-0x225 */
  undefined4 scratch_224[0x83]; /* EBP-0x224 .. EBP-0x019 */
  char *local_220 = (char *)&scratch_224[2]; /* EBP-0x21c */
  int local_20; /* EBP-0x1c: not part of REP STOSD region */
  /* Original six guest DWORDs EBP-0x18 .. EBP-0x01, including a
   * 16-byte overlapping URL record at EBP-0x10 (frame[2..5]).
   * Guest32 addresses are NOT native host pointers: ABI_UNVERIFIED. */
  uint32_t guest_frame[6];

  pcVar2 = param_1;
  puVar6 = scratch_224;
  for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_430;
  for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = guest_frame;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  guest_frame[2] = (uint32_t)(uintptr_t)local_430; /* MOV [EBP-0x10],EAX */
  scratch_224[1] = 1; /* MOV [EBP-0x220],1 */
  guest_frame[0] = 0x003b7678u; /* MOV [EBP-0x18],imm32 */
  guest_frame[1] = 8; /* MOV [EBP-0x14],8 */
  guest_frame[3] = 10; /* MOV [EBP-0x0c],10 */
  FUN_00342562(param_1 + 0x8dc,guest_frame,scratch_224);
  if (local_20 != 0) {
    return local_20;
  }
  iVar4 = FUN_0034204d(local_220,&guest_frame[2],&param_1);
  if (iVar4 == 0) {
    if ((uint16_t)(guest_frame[2] >> 16) == 0) {
      return -0x7feae6e8;
    }
    *(ushort *)(pcVar2 + 0x42) = (uint16_t)((guest_frame[2] >> 24) | ((guest_frame[2] >> 16) << 8));
    if (local_20 != 0) {
      return local_20;
    }
    pcVar5 = param_1;
    if (guest_frame[3] != *(uint32_t *)(pcVar2 + 0x38)) {
      return -0x7feae6e8;
    }
  }
  else {
    *(undefined2 *)(pcVar2 + 0x42) = *(undefined2 *)(pcVar2 + 0x40);
    pcVar5 = local_220;
    if (local_20 != 0) {
      return local_20;
    }
  }
  if (*pcVar5 != '\0') {
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(pcVar5 + 1)) < 0x80) {
      XAPILIB__lstrcpynA(pcVar2 + 0x254,pcVar5,0x80);
      return 0;
    }
  }
  return -0x7feae6e8;
}
