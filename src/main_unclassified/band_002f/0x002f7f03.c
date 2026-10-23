/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7313B8017920775A30562336462C3DBB4EE96E1524773F2DB3FF605CE7FB6EA4
 * Entry: 0x002f7f03, Ghidra index: 10940, label: XapiBootToDash
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_certificate_layout.h"
void XAPILIB__XapiBootToDash(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c04 [768];
  
  if (XBE_CERTIFICATE_HEADER_00010180.TitleID != 0xfffe0000) {
    puVar3 = local_c04;
    for (iVar2 = 0x300; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_c04[1] = 0;
    local_c04[0] = param_1;
    local_c04[2] = param_2;
    local_c04[3] = param_3;
    XLaunchNewImageA(0,local_c04);
    return;
  }
  HalReturnToFirmware(4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
