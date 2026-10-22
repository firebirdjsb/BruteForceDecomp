/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 262BFDAC171DDB288D7588BAFCB508671417D015ED5B2F0E2BA2C8421B73FCEA
 * Entry: 0x002f783f, Ghidra index: 10929, label: FUN_002f783f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
XBE_SECTION_HEADER * FUN_002f783f(undefined4 param_1)

{
  char cVar1;
  XBE_SECTION_HEADER *pXVar2;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  RtlInitAnsiString(local_14,param_1);
  pXVar2 = &XBE_SECTION_HEADER_0001036c;
  while( true ) {
    if ((XBE_SECTION_HEADER *)(XBE_SECTION_HEADER_000109c4.CheckSum + 0x13) < pXVar2) {
      XAPILIB__SetLastError(0x490);
      return (XBE_SECTION_HEADER *)0xffffffff;
    }
    RtlInitAnsiString(local_c,pXVar2->SectionName);
    cVar1 = RtlEqualString(local_14,local_c,1);
    if (cVar1 != '\0') break;
    pXVar2 = pXVar2 + 1;
  }
  return pXVar2;
}
