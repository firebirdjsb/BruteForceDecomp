/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F48203532CC15850ADB69FC33280ADCAB1025A84C03C8DD9BAEF78F222728EB3
 * Entry: 0x00330c6b, Ghidra index: 12376, label: FUN_00330c6b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0498;
extern uint32_t DAT_004b04ac;
extern uint32_t DAT_004b04c0;
extern uint32_t DAT_004b04d4;
void FUN_00330c6b(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 local_1b8 [384];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    XcHMAC(&DAT_004b04d4,0x10,param_1,100,0,0,&local_38);
    local_c = 0xb7a8357b;
    local_8 = 0x7a43ed27;
    XcHMAC(&DAT_004b04ac,0x10,&DAT_004b04c0,0x10,0,0,local_24);
    pcVar1 = (code *)&DAT_004b04c0;
  }
  else {
    XcHMAC(XboxHDKey_exref,0x10,param_1,100,0,0,&local_38);
    pcVar1 = XboxHDKey_exref;
    local_c = *param_2;
    local_8 = param_2[1];
    XcHMAC(&DAT_004b04ac,0x10,XboxHDKey_exref,0x10,0,0,local_24);
  }
  XcHMAC(&DAT_004b0498,0x10,pcVar1,0x10,0,0,local_20);
  XcDESKeyParity(local_24,0x18);
  XcKeyTable(1,local_1b8,local_24);
  XcBlockCryptCBC(1,0x10,param_1 + 0x50,param_1 + 0x50,local_1b8,1,&local_c);
  *(undefined4 *)(param_1 + 100) = local_38;
  *(undefined4 *)(param_1 + 0x68) = local_34;
  return;
}
