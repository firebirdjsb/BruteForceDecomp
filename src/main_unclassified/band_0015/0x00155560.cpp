/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE5A92C3C65C6244E07E92434C3EFB0E248D8CC8E5F79A7AD73ADD976E0AB004
 * Entry: 0x00155560, Ghidra index: 4467, label: FUN_00155560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00155560(void)

{
  byte bVar1;
  char cVar2;
  int in_ECX;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  int local_58;
  int local_28;
  
  if ((((*(byte *)(in_ECX + 0x26) & 4) != 0) && (*(short *)(in_ECX + 0x20) != -1)) &&
     (cVar2 = FUN_00022bc0(&local_88), cVar2 == '\x01')) {
    local_80 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xa40);
    local_84 = local_68;
    local_78 = local_68;
    local_7c = local_6c;
    local_74 = local_64;
    local_70 = local_88;
    FUN_000d4270(&local_80);
    FUN_000d1420(local_70);
joined_r0x00155600:
    if (local_58 != local_28) {
      FUN_001f3880();
      do {
        cVar2 = FUN_000d14d0();
        if (cVar2 == '\0') {
          local_58 = 0;
          break;
        }
      } while (local_58 == 0);
      goto joined_r0x00155600;
    }
    if (local_60 != '\0') {
      FUN_000d0bb0();
    }
  }
  if ((*(int *)(in_ECX + 8) != 0) && (*(short *)(in_ECX + 0x20) != -1)) {
    FUN_000d0830();
    *(undefined2 *)(in_ECX + 0x20) = 0xffff;
  }
  bVar1 = *(byte *)(in_ECX + 0x26);
  *(byte *)(in_ECX + 0x26) = bVar1 & 0xf7;
  if (((bVar1 & 0x10) != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_000e03a0();
    *(byte *)(in_ECX + 0x26) = *(byte *)(in_ECX + 0x26) & 0xef;
  }
  return;
}
