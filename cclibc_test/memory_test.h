#ifndef MEMORY_TEST_H_
#define MEMORY_TEST_H_

#include "cctest/util.h"

class memory_test_class: public CppUnit::TestFixture{
public:
	CPPUNIT_TEST_SUITE(memory_test_class);
	CPPUNIT_TEST(memory_malloc);
	CPPUNIT_TEST(stack_page_allocate);
	CPPUNIT_TEST(stack_pool_base_properties);
	CPPUNIT_TEST(stack_pool_base_allocate_new_page);
	CPPUNIT_TEST(stack_pool_base_allocate_reuse_page);
	CPPUNIT_TEST(stack_pool_base_allocate_new_page2);
	CPPUNIT_TEST(stack_pool_base_allocate_new_page_fullalloc);
	CPPUNIT_TEST(stack_pool_base_allocate_new_page_fullalloc2);
	CPPUNIT_TEST(stack_pool_base_allocate_str);
	CPPUNIT_TEST(stack_pool_base_allocate_str_len);
	CPPUNIT_TEST(stack_pool_clear_n_m_active);
	CPPUNIT_TEST(stack_pool_clear_n_m_k_active);
	CPPUNIT_TEST(stack_pool_clear_n_full);
	CPPUNIT_TEST(stack_pool_clear_n_fulls);
	CPPUNIT_TEST(stack_pool_base_reset0);
	CPPUNIT_TEST(stack_pool_base_reset1);
	CPPUNIT_TEST(stack_pool_base_reset2);
	CPPUNIT_TEST(stack_pool_base_reset3);
	CPPUNIT_TEST(stack_pool_base_reset4);
	CPPUNIT_TEST(stack_pool_base_reset5);
	CPPUNIT_TEST(stack_pool_thread_stack_pool);
	CPPUNIT_TEST(stack_ptr_des);
	CPPUNIT_TEST(stack_ptr_des_release);
	CPPUNIT_TEST(stack_ptr_reassign);
	CPPUNIT_TEST(buffer_pool_buffer_size);
	CPPUNIT_TEST(buffer_pool_properties);
	CPPUNIT_TEST(buffer_page_allocate);
	CPPUNIT_TEST(buffer_page_full);
	CPPUNIT_TEST(buffer_page_deallocate);
	CPPUNIT_TEST(buffer_page_deallocate_full);
	CPPUNIT_TEST(buffer_page_reallocate);
	CPPUNIT_TEST(buffer_page_deallocate_all);
	CPPUNIT_TEST(buffer_pool_allocate_n_0_active_a_1_node);
	CPPUNIT_TEST(buffer_pool_allocate_n_m_active_a_1_node);
	CPPUNIT_TEST(buffer_pool_allocate_n_n_1_active_a_1_node);
	CPPUNIT_TEST(buffer_pool_allocate_1_0_active_a_1_node);
	CPPUNIT_TEST(buffer_pool_deallocate_4_1_active_de_1_node);
	CPPUNIT_TEST(buffer_pool_deallocate_2_1_active_de_1_node);
	CPPUNIT_TEST(buffer_pool_deallocate_2_1_1_active_de_2_node);
	CPPUNIT_TEST(buffer_pool_deallocate_2_2_active_de_1_node);
	CPPUNIT_TEST(buffer_pool_deallocate_1_1_active_de_1_node);
	CPPUNIT_TEST(buffer_pool_deallocate_1_1_1_active_de_2_node);
	CPPUNIT_TEST(buffer_pool_clear_n_m_active);
	CPPUNIT_TEST(buffer_pool_clear_n_m_k_active);
	CPPUNIT_TEST(buffer_pool_clear_n_full);
	CPPUNIT_TEST(buffer_pool_clear_n_fulls);
	CPPUNIT_TEST(buffer_pool_list_thread_buffer_pool_list);
	CPPUNIT_TEST(buffer_pool_list_add);
	CPPUNIT_TEST(buffer_pool_list_remove);
	CPPUNIT_TEST(object_type_align);
	CPPUNIT_TEST(pool_ptr_des);
	CPPUNIT_TEST(pool_ptr_des_release);
	CPPUNIT_TEST(object_ptr_des);
	CPPUNIT_TEST(object_ptr_des_release);
	CPPUNIT_TEST(object_ptr_construct_error);
	CPPUNIT_TEST(allocator_set_instance);
	CPPUNIT_TEST(allocator_size);
	CPPUNIT_TEST(allocator_any_new);
	CPPUNIT_TEST(object_delete_macro);
	CPPUNIT_TEST(object_ptr_reassign);
	CPPUNIT_TEST_SUITE_END();

	void memory_malloc();
	void stack_page_allocate();
	void stack_pool_base_properties();
	void stack_pool_base_allocate_new_page();
	void stack_pool_base_allocate_reuse_page();
	void stack_pool_base_allocate_new_page2();
	void stack_pool_base_allocate_new_page_fullalloc();
	void stack_pool_base_allocate_new_page_fullalloc2();
	void stack_pool_base_allocate_str();
	void stack_pool_base_allocate_str_len();
	void stack_pool_clear_n_m_active();
	void stack_pool_clear_n_m_k_active();
	void stack_pool_clear_n_full();
	void stack_pool_clear_n_fulls();
	void stack_pool_base_reset0();
	void stack_pool_base_reset1();
	void stack_pool_base_reset2();
	void stack_pool_base_reset3();
	void stack_pool_base_reset4();
	void stack_pool_base_reset5();
	void stack_pool_thread_stack_pool();
	void stack_ptr_des();
	void stack_ptr_des_release();
	void stack_ptr_reassign();
	void buffer_pool_buffer_size();
	void buffer_pool_properties();
	void buffer_page_allocate();
	void buffer_page_full();
	void buffer_page_deallocate();
	void buffer_page_deallocate_full();
	void buffer_page_reallocate();
	void buffer_page_deallocate_all();
	void buffer_pool_allocate_n_0_active_a_1_node();
	void buffer_pool_allocate_n_m_active_a_1_node();
	void buffer_pool_allocate_n_n_1_active_a_1_node();
	void buffer_pool_allocate_1_0_active_a_1_node();
	void buffer_pool_deallocate_4_1_active_de_1_node();
	void buffer_pool_deallocate_2_1_active_de_1_node();
	void buffer_pool_deallocate_2_1_1_active_de_2_node();
	void buffer_pool_deallocate_2_2_active_de_1_node();
	void buffer_pool_deallocate_1_1_active_de_1_node();
	void buffer_pool_deallocate_1_1_1_active_de_2_node();
	void buffer_pool_clear_n_m_active();
	void buffer_pool_clear_n_m_k_active();
	void buffer_pool_clear_n_full();
	void buffer_pool_clear_n_fulls();
	void buffer_pool_list_thread_buffer_pool_list();
	void buffer_pool_list_add();
	void buffer_pool_list_remove();
	void object_type_align();
	void pool_ptr_des();
	void pool_ptr_des_release();
	void object_ptr_des();
	void object_ptr_des_release();
	void object_ptr_construct_error();
	void allocator_set_instance();
	void allocator_size();
	void allocator_string();
	void allocator_any_new();
	void object_delete_macro();
	void object_ptr_reassign();
};

#endif //MEMORY_TEST_H_