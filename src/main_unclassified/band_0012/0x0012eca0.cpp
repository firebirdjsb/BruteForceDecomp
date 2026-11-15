/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 9929DC721E398070B48ACD4088C5FD37097BBEFA1CB7A4C04C5C22A076DE9FCF
 * Entry: 0x0012eca0, Ghidra index: 3819, label: FUN_0012eca0
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_vector_status_leaf.h"

bool FUN_0012eca0(bf_guest32_constructor_state& guest, const bf_x87_vector_operations& x87)
{
    using namespace bf_guest32_constructor;
    using op = bf_x87_vector_opcode;
    const auto next = [&](std::uint32_t site, op operation, std::uint32_t operand = 0u) {
        guest.eip = site;
        return x87.execute(x87.context, site, operation, operand);
    };
    if (!next(0x0012eca0u, op::fld_m32, guest.ecx + 8u))
        return false;
    bf_guest32_leaf_sub(guest, guest.esp, 8u);
    guest.esp -= 8u;
    if (!next(0x0012eca6u, op::fld_m32, guest.ecx + 4u) ||
        !next(0x0012eca9u, op::fld_m32, guest.ecx) ||
        !next(0x0012ecabu, op::fld_st, 0u) ||
        !next(0x0012ecadu, op::fmul_st, 1u) ||
        !next(0x0012ecafu, op::fld_st, 2u) ||
        !next(0x0012ecb1u, op::fmul_st, 3u) ||
        !next(0x0012ecb3u, op::faddp_st1) ||
        !next(0x0012ecb5u, op::fld_st, 3u) ||
        !next(0x0012ecb7u, op::fmul_st, 4u) ||
        !next(0x0012ecb9u, op::faddp_st1) ||
        !next(0x0012ecbbu, op::fcomp_m32, 0x003a4f88u) ||
        !next(0x0012ecc1u, op::fstp_st0))
        return false;
    guest.eip = 0x0012ecc3u;
    std::uint16_t status;
    if (!x87.fnstsw_ax(x87.context, guest.eip, status))
        return false;
    guest.eax = (guest.eax & 0xffff0000u) | status;
    if (!next(0x0012ecc5u, op::fstp_st0))
        return false;
    // TEST AH,0x41 tests C0/C3 sampled by FNSTSW, even if the last FSTP
    // subsequently changes the x87 environment before JNE.
    const auto comparison = (guest.eax >> 8u) & 0x41u;
    logic_flags(guest, comparison, 0x80u);
    if (!next(0x0012eccau, op::fstp_st0))
        return false;

    if (comparison != 0u) {
        write32(guest, 0x0012ed08u, guest.esp + 4u, 0x3f800000u);
        guest.eax = read32(guest, 0x0012ed10u, guest.esp + 4u);
        write32(guest, 0x0012ed14u, guest.esp, 0u);
        guest.ecx = read32(guest, 0x0012ed1cu, guest.esp);
        write32(guest, 0x0012ed20u, guest.esi, 0x3fc66666u);
        write32(guest, 0x0012ed26u, guest.edx, 0u);
        write32(guest, 0x0012ed2cu, guest.edx + 4u, guest.ecx);
        write32(guest, 0x0012ed2fu, guest.edx + 8u, guest.eax);
        guest.esp = bf_guest32_leaf_add(guest, guest.esp, 8u);
        ret(guest, 0x0012ed35u);
        return true;
    }

    guest.eax = read32(guest, 0x0012ecceu, guest.ecx);
    write32(guest, 0x0012ecd0u, guest.esi, guest.eax);
    constexpr std::uint32_t scale_address = 0x003a4fe0u;
    if (!next(0x0012ecd2u, op::fld_m32, guest.ecx + 8u) ||
        !next(0x0012ecd5u, op::fmul_m32, scale_address) ||
        !next(0x0012ecdbu, op::fld_m32, guest.ecx + 4u) ||
        !next(0x0012ecdeu, op::fmul_m32, scale_address) ||
        !next(0x0012ece4u, op::fld_st, 0u) ||
        !next(0x0012ece6u, op::fcos) ||
        !next(0x0012ece8u, op::fstp_m32, guest.esp) ||
        !next(0x0012ececu, op::fld_st, 1u) ||
        !next(0x0012eceeu, op::fsin) ||
        !next(0x0012ecf0u, op::fmul_m32, guest.esp) ||
        !next(0x0012ecf4u, op::fstp_m32, guest.edx) ||
        !next(0x0012ecf6u, op::fsin) ||
        !next(0x0012ecf8u, op::fstp_m32, guest.edx + 4u) ||
        !next(0x0012ecfbu, op::fcos) ||
        !next(0x0012ecfdu, op::fmul_m32, guest.esp) ||
        !next(0x0012ed01u, op::fstp_m32, guest.edx + 8u))
        return false;
    guest.esp = bf_guest32_leaf_add(guest, guest.esp, 8u);
    ret(guest, 0x0012ed07u);
    return true;
}
