/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EA8EFB5B8D8DE2216A774F32C2F2A03E509F5D97B2F61FF33E901B23267D3E9
 * Entry: 0x002f5d1f, Ghidra index: 10907, label: entry
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a90e0;
void entry(void)

{
  int iVar1;
  
  if (0x1e80 < XBE_CERTIFICATE_HEADER_00010180.SizeOfHeader) {
    XBE_CERTIFICATE_HEADER_00010180.SizeOfHeader = 0x1e80;
  }
  DAT_004a90e0 = 0x14;
  *(uint32_t *)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x00387aac) = UINT32_C(0xfffffffb);
  iVar1 = XAPILIB__CreateThread(0,0,0x2f5cab,0,0,0);
  if (iVar1 == 0) {
    XAPILIB__XapiBootToDash(1,1,0);
  }
  XAPILIB__CloseHandle(iVar1);
  return;
}
