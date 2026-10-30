/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8755D580C3DDD67AC396D379DAA88F0BC7BF5EB6645F17C9D007B9FE8029A457
 * Entry: 0x001f0f60, Ghidra index: 6985, label: FUN_001f0f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f0f60(void)

{
  char cVar1;
  int iVar2;
  char *in_EAX;
  char *unaff_ESI;
  char *unaff_EDI;
  
  if ((*unaff_ESI == '\0') && (*(int *)(unaff_ESI + 4) == 0)) {
    unaff_ESI[8] = '\0';
    unaff_ESI[9] = '\0';
    unaff_ESI[10] = '\0';
    unaff_ESI[0xb] = '\0';
    iVar2 = 0x34 - (int)in_EAX;
    do {
      cVar1 = *in_EAX;
      in_EAX[(int)(unaff_ESI + iVar2)] = cVar1;
      in_EAX = in_EAX + 1;
    } while (cVar1 != '\0');
    iVar2 = 0x138 - (int)unaff_EDI;
    do {
      cVar1 = *unaff_EDI;
      unaff_EDI[(int)(unaff_ESI + iVar2)] = cVar1;
      unaff_EDI = unaff_EDI + 1;
    } while (cVar1 != '\0');
    unaff_ESI[4] = '\x01';
    unaff_ESI[5] = '\0';
    unaff_ESI[6] = '\0';
    unaff_ESI[7] = '\0';
    XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x18));
    return 0;
  }
  return 0x80004005;
}
