/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC6331864563D711DBF8990A7C8A7D4E3659181CD9306843DB48EBE9EFBD1325
 * Entry: 0x0005cb60, Ghidra index: 957, label: FUN_0005cb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_0005cb60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_0005cbaa;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == param_2)) {
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          if (*(int *)(iVar1 + 0xc) != *(int *)(iVar1 + 4)) {
            /* Original XBE: 0x0005CB97 LEA ESI,[EAX+8]; 0x0005CBA1 PUSH EAX; CALL 0x0008F6A0.
       Host-only guest32 register/stack model; original C++ ABI_UNVERIFIED. */
    FUN_0008f6a0(static_cast<std::uint32_t>(iVar1) + UINT32_C(8), static_cast<std::uint32_t>(*(int *)(iVar1 + 4)));
          }
        }
        else {
          *(byte *)(iVar1 + 0x20) = *(byte *)(iVar1 + 0x20) | 1;
        }
      }
LAB_0005cbaa:
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}
