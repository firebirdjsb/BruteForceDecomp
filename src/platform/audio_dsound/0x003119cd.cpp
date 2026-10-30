/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 113ABE9CA14A8C1604F1CACC524724E2C401F4037628C9D191F07E54C59C5091
 * Entry: 0x003119cd, Ghidra index: 11905, label: DirectSoundEnterCriticalSection
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__DirectSoundEnterCriticalSection(void)

{
  int unaff_FS_OFFSET;
  
  if (*(char *)(unaff_FS_OFFSET + 0x24) != '\0') {
    return 0;
  }
  RtlEnterCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  return 1;
}
