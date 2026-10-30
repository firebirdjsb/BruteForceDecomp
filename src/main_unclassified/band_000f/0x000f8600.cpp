/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 852B7D3AB678D9212ACDCE436DA310916A88F9F048F47A1F9159C6DCCB61757B
 * Entry: 0x000f8600, Ghidra index: 3119, label: FUN_000f8600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_d__downloader_xbe_0040cd0c[];
void FUN_000f8600(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c08 [769];
  
  puVar2 = local_c08;
  for (iVar1 = 0x300; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  XAPILIB__XLaunchNewImageA(s_d__downloader_xbe_0040cd0c,local_c08);
  return;
}
