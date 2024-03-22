#include "ExprUtil.hpp"

inline std::vector<std::pair<std::string, std::string>> searchInMilvus(const std::string milvus_host, const int64_t milvus_port, const std::string& collection_name, 
                const std::string& vector_field_name, const std::string& vertex_id_field_name, const std::vector<float>& query_vector, const std::string& metric_type, const int64_t top_k) {
    MilvusUtil milvus_util(milvus_host, milvus_port);

    std::cout << "Beginning the search on: " << collection_name << std::endl;
    return milvus_util.search(collection_name, vector_field_name, vertex_id_field_name, query_vector, metric_type, top_k);
}