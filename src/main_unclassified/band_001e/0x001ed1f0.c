/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE97B98E4634D0BEEA1BFA31C1194C0C0E6EE2FB3967403CD0C1741AE7D8724B
 * Entry: 0x001ed1f0, Ghidra index: 6926, label: FUN_001ed1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396c10;
void FUN_001ed1f0(void)

{
  byte bVar1;
  char cVar2;
  undefined1 *in_EAX;
  int iVar3;
  wchar_t *__src;
  int unaff_EDI;
  size_t __n;
  undefined **local_60 [6];
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  wchar_t local_2c [16];
  undefined4 local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  byte local_4;
  
  FUN_002e8c40();
  local_48 = *in_EAX;
  local_60[0] = &PTR_FUN_00396c10;
  local_44 = 0xffffffff;
  if (*(int *)(unaff_EDI + 0x1c) != 0) {
    cVar2 = FUN_002e5880();
    if (cVar2 == '\0') {
      iVar3 = FUN_002e5bf0(0);
      local_44 = *(undefined4 *)(iVar3 + 0x2c);
    }
    else {
      local_44 = 0;
    }
  }
  local_3c = *(undefined4 *)(in_EAX + 0x10);
  local_40 = *(undefined4 *)(in_EAX + 4);
  local_38 = *(undefined4 *)(in_EAX + 0xc);
  local_30 = *(undefined4 *)(in_EAX + 0x98);
  local_c = *(undefined4 *)(in_EAX + 0xa0);
  local_34 = *(undefined4 *)(in_EAX + 0x14);
  bVar1 = in_EAX[0xa4];
  local_8 = bVar1 & 1;
  local_7 = bVar1 >> 1 & 1;
  local_6 = bVar1 >> 2 & 1;
  local_5 = bVar1 >> 3 & 1;
  local_4 = bVar1 >> 4 & 1;
  iVar3 = FUN_002eaa70(in_EAX + 0x18);
  if (iVar3 == 0) {
    __n = 0x10;
    __src = (wchar_t *)FUN_001e97c0();
    _wcsncpy(local_2c,__src,__n);
  }
  else {
    _wcsncpy(local_2c,(wchar_t *)(in_EAX + 0x18),0x10);
  }
  FUN_002e7f50(0xfffffffb,local_60,1,1);
  FUN_002e8b80();
  return;
}
